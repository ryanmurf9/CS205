/********************************************************************************
** Form generated from reading UI file 'itemview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMVIEW_H
#define UI_ITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemView
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QLabel *logoMM;
    QLabel *muName;
    QLabel *image;
    QLabel *iName;
    QLabel *iCreator;
    QLabel *description;
    QLabel *label;
    QLabel *label_2;
    QLabel *user;
    QLabel *comment;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QTextEdit *comment_2;
    QPushButton *addComment;
    QFrame *line_4;
    QFrame *line_5;

    void setupUi(QDialog *ItemView)
    {
        if (ItemView->objectName().isEmpty())
            ItemView->setObjectName(QString::fromUtf8("ItemView"));
        ItemView->resize(820, 600);
        layoutWidget = new QWidget(ItemView);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 791, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(layoutWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));

        horizontalLayout->addWidget(homeButton);

        mListButton = new QPushButton(layoutWidget);
        mListButton->setObjectName(QString::fromUtf8("mListButton"));

        horizontalLayout->addWidget(mListButton);

        itemsViewedButton = new QPushButton(layoutWidget);
        itemsViewedButton->setObjectName(QString::fromUtf8("itemsViewedButton"));

        horizontalLayout->addWidget(itemsViewedButton);

        myCommentsButton = new QPushButton(layoutWidget);
        myCommentsButton->setObjectName(QString::fromUtf8("myCommentsButton"));

        horizontalLayout->addWidget(myCommentsButton);

        accountButton = new QPushButton(layoutWidget);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));

        horizontalLayout->addWidget(accountButton);

        logoMM = new QLabel(ItemView);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
        muName = new QLabel(ItemView);
        muName->setObjectName(QString::fromUtf8("muName"));
        muName->setGeometry(QRect(20, 10, 651, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        muName->setFont(font);
        image = new QLabel(ItemView);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(80, 120, 291, 311));
        iName = new QLabel(ItemView);
        iName->setObjectName(QString::fromUtf8("iName"));
        iName->setGeometry(QRect(50, 450, 311, 41));
        QFont font1;
        font1.setPointSize(17);
        iName->setFont(font1);
        iCreator = new QLabel(ItemView);
        iCreator->setObjectName(QString::fromUtf8("iCreator"));
        iCreator->setGeometry(QRect(50, 510, 311, 41));
        iCreator->setFont(font1);
        description = new QLabel(ItemView);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(400, 140, 381, 121));
        description->setMaximumSize(QSize(381, 161));
        description->setWordWrap(true);
        label = new QLabel(ItemView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 270, 91, 20));
        label->setFont(font1);
        label_2 = new QLabel(ItemView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 120, 111, 16));
        label_2->setFont(font1);
        user = new QLabel(ItemView);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(400, 310, 141, 16));
        comment = new QLabel(ItemView);
        comment->setObjectName(QString::fromUtf8("comment"));
        comment->setGeometry(QRect(440, 330, 331, 91));
        comment->setWordWrap(true);
        pushButton = new QPushButton(ItemView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 300, 121, 32));
        pushButton_2 = new QPushButton(ItemView);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 550, 131, 41));
        pushButton_3 = new QPushButton(ItemView);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 550, 131, 41));
        pushButton_4 = new QPushButton(ItemView);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 550, 131, 41));
        line = new QFrame(ItemView);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(400, 290, 391, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ItemView);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(380, 310, 20, 221));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ItemView);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(400, 530, 391, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        comment_2 = new QTextEdit(ItemView);
        comment_2->setObjectName(QString::fromUtf8("comment_2"));
        comment_2->setGeometry(QRect(440, 440, 331, 74));
        addComment = new QPushButton(ItemView);
        addComment->setObjectName(QString::fromUtf8("addComment"));
        addComment->setGeometry(QRect(670, 510, 131, 32));
        line_4 = new QFrame(ItemView);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(400, 430, 391, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(ItemView);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(793, 310, 20, 221));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        retranslateUi(ItemView);

        QMetaObject::connectSlotsByName(ItemView);
    } // setupUi

    void retranslateUi(QDialog *ItemView)
    {
        ItemView->setWindowTitle(QCoreApplication::translate("ItemView", "Dialog", nullptr));
        homeButton->setText(QCoreApplication::translate("ItemView", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("ItemView", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("ItemView", "Search", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("ItemView", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("ItemView", "Account", nullptr));
        logoMM->setText(QString());
        muName->setText(QCoreApplication::translate("ItemView", "<h1>Museum Name</h1>", nullptr));
        image->setText(QCoreApplication::translate("ItemView", "Image", nullptr));
        iName->setText(QCoreApplication::translate("ItemView", "Item Name:", nullptr));
        iCreator->setText(QCoreApplication::translate("ItemView", "Creator:", nullptr));
        description->setText(QCoreApplication::translate("ItemView", "Description", nullptr));
        label->setText(QCoreApplication::translate("ItemView", "Comments:", nullptr));
        label_2->setText(QCoreApplication::translate("ItemView", "Description:", nullptr));
        user->setText(QCoreApplication::translate("ItemView", "User: N/A", nullptr));
        comment->setText(QCoreApplication::translate("ItemView", "No Comments Approved Yet", nullptr));
        pushButton->setText(QCoreApplication::translate("ItemView", "Next Comment", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ItemView", "Next Item", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ItemView", "Previous Item", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ItemView", "Back To Museum", nullptr));
        addComment->setText(QCoreApplication::translate("ItemView", "Add Comment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemView: public Ui_ItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMVIEW_H
