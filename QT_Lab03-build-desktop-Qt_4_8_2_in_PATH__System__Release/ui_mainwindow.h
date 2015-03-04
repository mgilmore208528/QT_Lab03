/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Mar 3 09:51:43 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *idLbl;
    QLabel *id;
    QLabel *fNameLbl;
    QLineEdit *firstNameEdit;
    QLabel *lNameLbl;
    QLineEdit *lastNameEdit;
    QLabel *addressLbl;
    QLineEdit *addressEdit;
    QLabel *cityLbl;
    QLineEdit *cityEdit;
    QLabel *stateLbl;
    QComboBox *stateDrop;
    QLabel *zipLbl;
    QComboBox *zipBox;
    QLabel *phoneLbl;
    QLineEdit *phoneEdit;
    QLabel *emailLbl;
    QLineEdit *emailEdit;
    QCheckBox *textCheck;
    QPushButton *submitBttn;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(288, 355);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        formLayoutWidget_2 = new QWidget(centralWidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 10, 271, 321));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        idLbl = new QLabel(formLayoutWidget_2);
        idLbl->setObjectName(QString::fromUtf8("idLbl"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, idLbl);

        id = new QLabel(formLayoutWidget_2);
        id->setObjectName(QString::fromUtf8("id"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, id);

        fNameLbl = new QLabel(formLayoutWidget_2);
        fNameLbl->setObjectName(QString::fromUtf8("fNameLbl"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, fNameLbl);

        firstNameEdit = new QLineEdit(formLayoutWidget_2);
        firstNameEdit->setObjectName(QString::fromUtf8("firstNameEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, firstNameEdit);

        lNameLbl = new QLabel(formLayoutWidget_2);
        lNameLbl->setObjectName(QString::fromUtf8("lNameLbl"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, lNameLbl);

        lastNameEdit = new QLineEdit(formLayoutWidget_2);
        lastNameEdit->setObjectName(QString::fromUtf8("lastNameEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lastNameEdit);

        addressLbl = new QLabel(formLayoutWidget_2);
        addressLbl->setObjectName(QString::fromUtf8("addressLbl"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, addressLbl);

        addressEdit = new QLineEdit(formLayoutWidget_2);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, addressEdit);

        cityLbl = new QLabel(formLayoutWidget_2);
        cityLbl->setObjectName(QString::fromUtf8("cityLbl"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, cityLbl);

        cityEdit = new QLineEdit(formLayoutWidget_2);
        cityEdit->setObjectName(QString::fromUtf8("cityEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, cityEdit);

        stateLbl = new QLabel(formLayoutWidget_2);
        stateLbl->setObjectName(QString::fromUtf8("stateLbl"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, stateLbl);

        stateDrop = new QComboBox(formLayoutWidget_2);
        stateDrop->setObjectName(QString::fromUtf8("stateDrop"));
        stateDrop->setEditable(false);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, stateDrop);

        zipLbl = new QLabel(formLayoutWidget_2);
        zipLbl->setObjectName(QString::fromUtf8("zipLbl"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, zipLbl);

        zipBox = new QComboBox(formLayoutWidget_2);
        zipBox->setObjectName(QString::fromUtf8("zipBox"));
        zipBox->setEditable(true);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, zipBox);

        phoneLbl = new QLabel(formLayoutWidget_2);
        phoneLbl->setObjectName(QString::fromUtf8("phoneLbl"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, phoneLbl);

        phoneEdit = new QLineEdit(formLayoutWidget_2);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, phoneEdit);

        emailLbl = new QLabel(formLayoutWidget_2);
        emailLbl->setObjectName(QString::fromUtf8("emailLbl"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, emailLbl);

        emailEdit = new QLineEdit(formLayoutWidget_2);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, emailEdit);

        textCheck = new QCheckBox(formLayoutWidget_2);
        textCheck->setObjectName(QString::fromUtf8("textCheck"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, textCheck);

        submitBttn = new QPushButton(formLayoutWidget_2);
        submitBttn->setObjectName(QString::fromUtf8("submitBttn"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, submitBttn);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        idLbl->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        id->setText(QApplication::translate("MainWindow", "11111111", 0, QApplication::UnicodeUTF8));
        fNameLbl->setText(QApplication::translate("MainWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        lNameLbl->setText(QApplication::translate("MainWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        addressLbl->setText(QApplication::translate("MainWindow", "Address:", 0, QApplication::UnicodeUTF8));
        cityLbl->setText(QApplication::translate("MainWindow", "City:", 0, QApplication::UnicodeUTF8));
        stateLbl->setText(QApplication::translate("MainWindow", "State:", 0, QApplication::UnicodeUTF8));
        zipLbl->setText(QApplication::translate("MainWindow", "Zip:", 0, QApplication::UnicodeUTF8));
        phoneLbl->setText(QApplication::translate("MainWindow", "Phone:", 0, QApplication::UnicodeUTF8));
        emailLbl->setText(QApplication::translate("MainWindow", "Email:", 0, QApplication::UnicodeUTF8));
        textCheck->setText(QApplication::translate("MainWindow", "receive texts", 0, QApplication::UnicodeUTF8));
        submitBttn->setText(QApplication::translate("MainWindow", "Submit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
