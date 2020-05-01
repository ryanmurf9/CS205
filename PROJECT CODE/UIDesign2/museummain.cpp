#include "museummain.h"
#include "ui_museummain.h"

MuseumMain::MuseumMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumMain)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));

    name1 = "Museum 1";
    name2 = "";
    name3 = "";

    ui->mName1->setText(QString::fromStdString(name1));
    ui->mName2->setText(QString::fromStdString(name2));
    ui->mName3->setText(QString::fromStdString(name3));

    ui->visit1->setText("Visit "+QString::fromStdString(name1));
    ui->visit2->setText("Visit "+QString::fromStdString(name2));
    ui->visit3->setText("Visit "+QString::fromStdString(name3));


}

MuseumMain::~MuseumMain()
{
    delete ui;
}

void MuseumMain::on_mListButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

void MuseumMain::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void MuseumMain::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void MuseumMain::on_accountButton_clicked()
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






void MuseumMain::setUName(std::string u)
{
    username = u;
}

std::string MuseumMain::getUName()
{
    return username;
}

void MuseumMain::on_visit1_clicked()
{
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name1);
    mp->show();
    hide();
}

void MuseumMain::on_visit2_clicked()
{
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name2);
    mp->show();
    hide();
}

void MuseumMain::on_visit3_clicked()
{
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name3);
    mp->show();
    hide();
}

//Takes museum name and returns vector of items that are in that museum
vector<Item> getMuseumItems(string museum)
{
    vector<Item> retVector;
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

    string s1 = "SELECT * FROM itemTable WHERE museum = ";
    s1.append("'");
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

    while(query.next())
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

         retVector.push_back(item1);
    }

    return retVector;
}
