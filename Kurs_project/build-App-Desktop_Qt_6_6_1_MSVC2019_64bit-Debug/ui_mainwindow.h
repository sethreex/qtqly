/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pb_fill_from_txt;
    QLabel *label_data_about_patient;
    QCheckBox *checkBox_agreement;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_surname;
    QLabel *label_name;
    QLabel *label_patronomic;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_surname;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_patronomic;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_sex;
    QCheckBox *checkBox_male;
    QCheckBox *checkBox_female;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_date_of_birth;
    QDateEdit *dateEdit_date_of_birth;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_pasport;
    QLabel *label_snils;
    QLabel *label_strax_polus;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_passport;
    QLineEdit *lineEdit_snils;
    QLineEdit *lineEdit_srax_polus;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_telefon;
    QLineEdit *lineEdit_telefon;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_clock;
    QTimeEdit *timeEdit_clock;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_date_recording;
    QDateEdit *dateEdit_date_recording;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_doctor;
    QComboBox *comboBox_doctor;
    QPushButton *pushButton_zapisatsa;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(991, 649);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        pb_fill_from_txt = new QPushButton(centralwidget);
        pb_fill_from_txt->setObjectName("pb_fill_from_txt");

        verticalLayout_6->addWidget(pb_fill_from_txt);

        label_data_about_patient = new QLabel(centralwidget);
        label_data_about_patient->setObjectName("label_data_about_patient");

        verticalLayout_6->addWidget(label_data_about_patient);

        checkBox_agreement = new QCheckBox(centralwidget);
        checkBox_agreement->setObjectName("checkBox_agreement");

        verticalLayout_6->addWidget(checkBox_agreement);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_surname = new QLabel(centralwidget);
        label_surname->setObjectName("label_surname");

        verticalLayout->addWidget(label_surname);

        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");

        verticalLayout->addWidget(label_name);

        label_patronomic = new QLabel(centralwidget);
        label_patronomic->setObjectName("label_patronomic");

        verticalLayout->addWidget(label_patronomic);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_surname = new QLineEdit(centralwidget);
        lineEdit_surname->setObjectName("lineEdit_surname");

        verticalLayout_2->addWidget(lineEdit_surname);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_patronomic = new QLineEdit(centralwidget);
        lineEdit_patronomic->setObjectName("lineEdit_patronomic");

        verticalLayout_2->addWidget(lineEdit_patronomic);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_sex = new QLabel(centralwidget);
        label_sex->setObjectName("label_sex");

        horizontalLayout_8->addWidget(label_sex);

        checkBox_male = new QCheckBox(centralwidget);
        checkBox_male->setObjectName("checkBox_male");

        horizontalLayout_8->addWidget(checkBox_male);

        checkBox_female = new QCheckBox(centralwidget);
        checkBox_female->setObjectName("checkBox_female");

        horizontalLayout_8->addWidget(checkBox_female);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_date_of_birth = new QLabel(centralwidget);
        label_date_of_birth->setObjectName("label_date_of_birth");

        horizontalLayout_7->addWidget(label_date_of_birth);

        dateEdit_date_of_birth = new QDateEdit(centralwidget);
        dateEdit_date_of_birth->setObjectName("dateEdit_date_of_birth");

        horizontalLayout_7->addWidget(dateEdit_date_of_birth);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_pasport = new QLabel(centralwidget);
        label_pasport->setObjectName("label_pasport");

        verticalLayout_4->addWidget(label_pasport);

        label_snils = new QLabel(centralwidget);
        label_snils->setObjectName("label_snils");

        verticalLayout_4->addWidget(label_snils);

        label_strax_polus = new QLabel(centralwidget);
        label_strax_polus->setObjectName("label_strax_polus");

        verticalLayout_4->addWidget(label_strax_polus);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        lineEdit_passport = new QLineEdit(centralwidget);
        lineEdit_passport->setObjectName("lineEdit_passport");

        verticalLayout_5->addWidget(lineEdit_passport);

        lineEdit_snils = new QLineEdit(centralwidget);
        lineEdit_snils->setObjectName("lineEdit_snils");

        verticalLayout_5->addWidget(lineEdit_snils);

        lineEdit_srax_polus = new QLineEdit(centralwidget);
        lineEdit_srax_polus->setObjectName("lineEdit_srax_polus");

        verticalLayout_5->addWidget(lineEdit_srax_polus);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_telefon = new QLabel(centralwidget);
        label_telefon->setObjectName("label_telefon");

        horizontalLayout_6->addWidget(label_telefon);

        lineEdit_telefon = new QLineEdit(centralwidget);
        lineEdit_telefon->setObjectName("lineEdit_telefon");

        horizontalLayout_6->addWidget(lineEdit_telefon);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_clock = new QLabel(centralwidget);
        label_clock->setObjectName("label_clock");

        horizontalLayout->addWidget(label_clock);

        timeEdit_clock = new QTimeEdit(centralwidget);
        timeEdit_clock->setObjectName("timeEdit_clock");

        horizontalLayout->addWidget(timeEdit_clock);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_date_recording = new QLabel(centralwidget);
        label_date_recording->setObjectName("label_date_recording");

        horizontalLayout_2->addWidget(label_date_recording);

        dateEdit_date_recording = new QDateEdit(centralwidget);
        dateEdit_date_recording->setObjectName("dateEdit_date_recording");

        horizontalLayout_2->addWidget(dateEdit_date_recording);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_doctor = new QLabel(centralwidget);
        label_doctor->setObjectName("label_doctor");

        horizontalLayout_3->addWidget(label_doctor);

        comboBox_doctor = new QComboBox(centralwidget);
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->addItem(QString());
        comboBox_doctor->setObjectName("comboBox_doctor");

        horizontalLayout_3->addWidget(comboBox_doctor);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_3);

        pushButton_zapisatsa = new QPushButton(centralwidget);
        pushButton_zapisatsa->setObjectName("pushButton_zapisatsa");

        verticalLayout_6->addWidget(pushButton_zapisatsa);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 991, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pb_fill_from_txt->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\201 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_data_about_patient->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        checkBox_agreement->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\216 \321\201\320\276\320\263\320\273\320\260\321\201\320\270\320\265 \320\275\320\260 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_surname->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_patronomic->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_sex->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        checkBox_male->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        checkBox_female->setText(QCoreApplication::translate("MainWindow", "\320\226", nullptr));
        label_date_of_birth->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_pasport->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        label_snils->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\320\270\320\273\321\201", nullptr));
        label_strax_polus->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\216\321\201\320\260", nullptr));
        label_telefon->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\321\213\320\271 \321\202\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_clock->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_date_recording->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_doctor->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207", nullptr));
        comboBox_doctor->setItemText(0, QCoreApplication::translate("MainWindow", "\320\245\320\270\321\200\321\203\321\200\320\263", nullptr));
        comboBox_doctor->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\274\320\260\321\202\320\276\320\273\320\276\320\263", nullptr));
        comboBox_doctor->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\265\320\264\320\270\320\260\321\202\321\200", nullptr));
        comboBox_doctor->setItemText(3, QCoreApplication::translate("MainWindow", "\320\236\321\200\321\202\320\276\320\273\320\276\321\200\320\270\320\275\320\263\320\276\320\273\320\276\320\263", nullptr));
        comboBox_doctor->setItemText(4, QCoreApplication::translate("MainWindow", "\320\236\320\272\321\203\320\273\320\270\321\201\321\202", nullptr));
        comboBox_doctor->setItemText(5, QCoreApplication::translate("MainWindow", "\320\224\320\265\321\200\320\274\320\276\321\202\320\276\320\273\320\276\320\263", nullptr));
        comboBox_doctor->setItemText(6, QCoreApplication::translate("MainWindow", "\320\237\321\201\320\270\321\205\320\270\320\260\321\202\321\200", nullptr));
        comboBox_doctor->setItemText(7, QCoreApplication::translate("MainWindow", "\320\235\320\265\321\200\320\262\320\260\320\277\320\276\321\202\320\276\320\273\320\276\320\263", nullptr));
        comboBox_doctor->setItemText(8, QCoreApplication::translate("MainWindow", "\320\232\320\260\321\200\320\264\320\270\320\276\320\273\320\276\320\263", nullptr));
        comboBox_doctor->setItemText(9, QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\320\272\320\276\320\273\320\276\320\263", nullptr));

        pushButton_zapisatsa->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
