/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

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
    QLineEdit *zipEdit;
    QLabel *phoneLbl;
    QLineEdit *phoneEdit;
    QLabel *emailLbl;
    QLineEdit *emailEdit;
    QCheckBox *textCheck;
    QPushButton *submitBttn;
    QLineEdit *SearchEdit;
    QLabel *searchLbl;
    QPushButton *searchBttn;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(290, 398);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayoutWidget_2 = new QWidget(centralWidget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 10, 271, 361));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        idLbl = new QLabel(formLayoutWidget_2);
        idLbl->setObjectName(QStringLiteral("idLbl"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, idLbl);

        id = new QLabel(formLayoutWidget_2);
        id->setObjectName(QStringLiteral("id"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, id);

        fNameLbl = new QLabel(formLayoutWidget_2);
        fNameLbl->setObjectName(QStringLiteral("fNameLbl"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, fNameLbl);

        firstNameEdit = new QLineEdit(formLayoutWidget_2);
        firstNameEdit->setObjectName(QStringLiteral("firstNameEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, firstNameEdit);

        lNameLbl = new QLabel(formLayoutWidget_2);
        lNameLbl->setObjectName(QStringLiteral("lNameLbl"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, lNameLbl);

        lastNameEdit = new QLineEdit(formLayoutWidget_2);
        lastNameEdit->setObjectName(QStringLiteral("lastNameEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lastNameEdit);

        addressLbl = new QLabel(formLayoutWidget_2);
        addressLbl->setObjectName(QStringLiteral("addressLbl"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, addressLbl);

        addressEdit = new QLineEdit(formLayoutWidget_2);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, addressEdit);

        cityLbl = new QLabel(formLayoutWidget_2);
        cityLbl->setObjectName(QStringLiteral("cityLbl"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, cityLbl);

        cityEdit = new QLineEdit(formLayoutWidget_2);
        cityEdit->setObjectName(QStringLiteral("cityEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, cityEdit);

        stateLbl = new QLabel(formLayoutWidget_2);
        stateLbl->setObjectName(QStringLiteral("stateLbl"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, stateLbl);

        stateDrop = new QComboBox(formLayoutWidget_2);
        stateDrop->setObjectName(QStringLiteral("stateDrop"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, stateDrop);

        zipLbl = new QLabel(formLayoutWidget_2);
        zipLbl->setObjectName(QStringLiteral("zipLbl"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, zipLbl);

        zipEdit = new QLineEdit(formLayoutWidget_2);
        zipEdit->setObjectName(QStringLiteral("zipEdit"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, zipEdit);

        phoneLbl = new QLabel(formLayoutWidget_2);
        phoneLbl->setObjectName(QStringLiteral("phoneLbl"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, phoneLbl);

        phoneEdit = new QLineEdit(formLayoutWidget_2);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, phoneEdit);

        emailLbl = new QLabel(formLayoutWidget_2);
        emailLbl->setObjectName(QStringLiteral("emailLbl"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, emailLbl);

        emailEdit = new QLineEdit(formLayoutWidget_2);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, emailEdit);

        textCheck = new QCheckBox(formLayoutWidget_2);
        textCheck->setObjectName(QStringLiteral("textCheck"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, textCheck);

        submitBttn = new QPushButton(formLayoutWidget_2);
        submitBttn->setObjectName(QStringLiteral("submitBttn"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, submitBttn);

        SearchEdit = new QLineEdit(formLayoutWidget_2);
        SearchEdit->setObjectName(QStringLiteral("SearchEdit"));

        formLayout_2->setWidget(13, QFormLayout::FieldRole, SearchEdit);

        searchLbl = new QLabel(formLayoutWidget_2);
        searchLbl->setObjectName(QStringLiteral("searchLbl"));

        formLayout_2->setWidget(13, QFormLayout::LabelRole, searchLbl);

        searchBttn = new QPushButton(formLayoutWidget_2);
        searchBttn->setObjectName(QStringLiteral("searchBttn"));

        formLayout_2->setWidget(14, QFormLayout::FieldRole, searchBttn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(11, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(12, QFormLayout::LabelRole, verticalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        idLbl->setText(QApplication::translate("MainWindow", "ID:", 0));
        id->setText(QApplication::translate("MainWindow", "11111111", 0));
        fNameLbl->setText(QApplication::translate("MainWindow", "First Name:", 0));
        lNameLbl->setText(QApplication::translate("MainWindow", "Last Name:", 0));
        addressLbl->setText(QApplication::translate("MainWindow", "Address:", 0));
        cityLbl->setText(QApplication::translate("MainWindow", "City:", 0));
        stateLbl->setText(QApplication::translate("MainWindow", "State:", 0));
        zipLbl->setText(QApplication::translate("MainWindow", "Zip:", 0));
        phoneLbl->setText(QApplication::translate("MainWindow", "Phone:", 0));
        emailLbl->setText(QApplication::translate("MainWindow", "Email:", 0));
        textCheck->setText(QApplication::translate("MainWindow", "receive texts", 0));
        submitBttn->setText(QApplication::translate("MainWindow", "Submit", 0));
        searchLbl->setText(QApplication::translate("MainWindow", "Search users:", 0));
        searchBttn->setText(QApplication::translate("MainWindow", "search", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
