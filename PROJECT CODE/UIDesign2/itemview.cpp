#include "itemview.h"
#include "ui_itemview.h"

ItemView::ItemView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemView)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

ItemView::~ItemView()
{
    delete ui;
}

void ItemView::on_mListButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

void ItemView::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void ItemView::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void ItemView::on_accountButton_clicked()
{
    //go to account

    //if curator open curator account look
    if(1>0)
    {
        ac = new accountCurator();
        ac->setUName(username);
        ac->show();
        hide();
    }
    else
    {
        av = new accountViewer();
        av->setUName(username);
        av->show();
        hide();
    }
}

void ItemView::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}

void ItemView::setUName(std::string u)
{
    username = u;
}

std::string ItemView::getUName()
{
    return username;
}

void ItemView::setMName(std::string m)
{
    museumName = m;
    ui->muName->setText(QString::fromStdString(museumName));
}

std::string ItemView::getMName()
{
    return museumName;
}

void ItemView::setIName(std::string i)
{
    itName = i;
    ui->iName->setText(QString::fromStdString(itName));
}

std::string ItemView::getIName()
{
    return itName;
}



void ItemView::on_pushButton_4_clicked()
{
    //back to museum
    mp = new MuseumPage();
    mp->setMName(museumName);
    mp->setUName(username);
    mp->show();
    hide();

}

void ItemView::on_pushButton_2_clicked()
{
    //go to next item

}


void ItemView::on_pushButton_3_clicked()
{
    //go to previous item

}

Item ItemView::getItemObject(string museum, string itemName)
{
    Item item1;
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM itemTable WHERE name = ";
    s1.append("'");
    s1.append(itemName);
    s1.append("'");
    s1.append(" AND museum = '");
    s1.append(museum);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    cout << s2 << endl;
    QSqlQuery query;

    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }

    if(query.first())
    {
        item1.name = query.value(0).toString().toStdString();
        item1.description = query.value(1).toString().toStdString();
        item1.artist = query.value(2).toString().toStdString();
        item1.owner = query.value(3).toString().toStdString();
        item1.museum = query.value(4).toString().toStdString();
        item1.collection = query.value(5).toString().toStdString();
        item1.filename = query.value(6).toString().toStdString();

         QByteArray outByteArray = query.value(7).toByteArray();
         QPixmap outputpix;
         outputpix.loadFromData(outByteArray);
         item1.image = outputpix;
    }

    cout << item1.getName() << endl;
    cout << item1.getDescription() << endl;
    cout << item1.getArtist() << endl;
    cout << item1.getOwner() << endl;
    cout << item1.getMuseum() << endl;
    cout << item1.getCollection();

    return item1;
}
