#include "museummain.h"
#include "ui_museummain.h"
#include "user.h"

MuseumMain::MuseumMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumMain)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));

    width = ui->logo->width();
    height = ui->logo->height();
    ui->logo->setPixmap(pix.scaled(width,height, Qt::KeepAspectRatio));





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
    User u;
    u.setUsername(username);
    u.getAccInfo(username);

    //if curator open curator account look
    if(u.ifCurator())
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


void MuseumMain::on_pushButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}
