/********************************************************************************
** Form generated from reading UI file 'form_ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_TICKET_H
#define UI_FORM_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Form_ticket
{
public:
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_text_talon;
    QLabel *label_num_ticket;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_text_surname;
    QLabel *label_surname;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_text_name;
    QLabel *label_name;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_text_patronymic;
    QLabel *label_patronymic;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_text_date_bith;
    QLabel *label_date_birth;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_text_sex;
    QLabel *label_sex;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_text_tel_num;
    QLabel *label_tel_num;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_text_time;
    QLabel *label_time;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_text_date;
    QLabel *label_date;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_text_doctor;
    QLabel *label_doctor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_text_doctor_;
    QLabel *label_pasport;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_text_snils;
    QLabel *label_snils;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_text_num_polis;
    QLabel *label_num_polus;
    QPushButton *pushButton;
    QPushButton *pushButton_print;

    void setupUi(QDialog *Form_ticket)
    {
        if (Form_ticket->objectName().isEmpty())
            Form_ticket->setObjectName("Form_ticket");
        Form_ticket->resize(758, 553);
        verticalLayout_10 = new QVBoxLayout(Form_ticket);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_text_talon = new QLabel(Form_ticket);
        label_text_talon->setObjectName("label_text_talon");

        horizontalLayout_9->addWidget(label_text_talon);

        label_num_ticket = new QLabel(Form_ticket);
        label_num_ticket->setObjectName("label_num_ticket");

        horizontalLayout_9->addWidget(label_num_ticket);


        verticalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_text_surname = new QLabel(Form_ticket);
        label_text_surname->setObjectName("label_text_surname");

        verticalLayout->addWidget(label_text_surname);

        label_surname = new QLabel(Form_ticket);
        label_surname->setObjectName("label_surname");
        label_surname->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(label_surname);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_text_name = new QLabel(Form_ticket);
        label_text_name->setObjectName("label_text_name");

        verticalLayout_2->addWidget(label_text_name);

        label_name = new QLabel(Form_ticket);
        label_name->setObjectName("label_name");
        label_name->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(label_name);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_text_patronymic = new QLabel(Form_ticket);
        label_text_patronymic->setObjectName("label_text_patronymic");

        verticalLayout_3->addWidget(label_text_patronymic);

        label_patronymic = new QLabel(Form_ticket);
        label_patronymic->setObjectName("label_patronymic");
        label_patronymic->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(label_patronymic);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_text_date_bith = new QLabel(Form_ticket);
        label_text_date_bith->setObjectName("label_text_date_bith");

        verticalLayout_4->addWidget(label_text_date_bith);

        label_date_birth = new QLabel(Form_ticket);
        label_date_birth->setObjectName("label_date_birth");
        label_date_birth->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(label_date_birth);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_text_sex = new QLabel(Form_ticket);
        label_text_sex->setObjectName("label_text_sex");

        verticalLayout_5->addWidget(label_text_sex);

        label_sex = new QLabel(Form_ticket);
        label_sex->setObjectName("label_sex");
        label_sex->setFrameShape(QFrame::Box);

        verticalLayout_5->addWidget(label_sex);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_text_tel_num = new QLabel(Form_ticket);
        label_text_tel_num->setObjectName("label_text_tel_num");

        verticalLayout_6->addWidget(label_text_tel_num);

        label_tel_num = new QLabel(Form_ticket);
        label_tel_num->setObjectName("label_tel_num");
        label_tel_num->setFrameShape(QFrame::Box);

        verticalLayout_6->addWidget(label_tel_num);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_text_time = new QLabel(Form_ticket);
        label_text_time->setObjectName("label_text_time");

        verticalLayout_7->addWidget(label_text_time);

        label_time = new QLabel(Form_ticket);
        label_time->setObjectName("label_time");
        label_time->setFrameShape(QFrame::Box);

        verticalLayout_7->addWidget(label_time);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_text_date = new QLabel(Form_ticket);
        label_text_date->setObjectName("label_text_date");

        verticalLayout_8->addWidget(label_text_date);

        label_date = new QLabel(Form_ticket);
        label_date->setObjectName("label_date");
        label_date->setFrameShape(QFrame::Box);

        verticalLayout_8->addWidget(label_date);


        horizontalLayout_2->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_text_doctor = new QLabel(Form_ticket);
        label_text_doctor->setObjectName("label_text_doctor");

        horizontalLayout_4->addWidget(label_text_doctor);

        label_doctor = new QLabel(Form_ticket);
        label_doctor->setObjectName("label_doctor");
        label_doctor->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(label_doctor);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_text_doctor_ = new QLabel(Form_ticket);
        label_text_doctor_->setObjectName("label_text_doctor_");

        horizontalLayout_5->addWidget(label_text_doctor_);

        label_pasport = new QLabel(Form_ticket);
        label_pasport->setObjectName("label_pasport");
        label_pasport->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(label_pasport);


        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_text_snils = new QLabel(Form_ticket);
        label_text_snils->setObjectName("label_text_snils");

        horizontalLayout_6->addWidget(label_text_snils);

        label_snils = new QLabel(Form_ticket);
        label_snils->setObjectName("label_snils");
        label_snils->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(label_snils);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_text_num_polis = new QLabel(Form_ticket);
        label_text_num_polis->setObjectName("label_text_num_polis");

        horizontalLayout_7->addWidget(label_text_num_polis);

        label_num_polus = new QLabel(Form_ticket);
        label_num_polus->setObjectName("label_num_polus");
        label_num_polus->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(label_num_polus);


        verticalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_10->addLayout(verticalLayout_9);

        pushButton = new QPushButton(Form_ticket);
        pushButton->setObjectName("pushButton");

        verticalLayout_10->addWidget(pushButton);

        pushButton_print = new QPushButton(Form_ticket);
        pushButton_print->setObjectName("pushButton_print");

        verticalLayout_10->addWidget(pushButton_print);


        retranslateUi(Form_ticket);

        QMetaObject::connectSlotsByName(Form_ticket);
    } // setupUi

    void retranslateUi(QDialog *Form_ticket)
    {
        Form_ticket->setWindowTitle(QCoreApplication::translate("Form_ticket", "Dialog", nullptr));
        label_text_talon->setText(QCoreApplication::translate("Form_ticket", "\320\242\320\260\320\273\320\276\320\275 \342\204\226", nullptr));
        label_num_ticket->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_surname->setText(QCoreApplication::translate("Form_ticket", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_surname->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_name->setText(QCoreApplication::translate("Form_ticket", "\320\230\320\274\321\217", nullptr));
        label_name->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_patronymic->setText(QCoreApplication::translate("Form_ticket", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_patronymic->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_date_bith->setText(QCoreApplication::translate("Form_ticket", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_date_birth->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_sex->setText(QCoreApplication::translate("Form_ticket", "\320\237\320\276\320\273 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260:", nullptr));
        label_sex->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_tel_num->setText(QCoreApplication::translate("Form_ticket", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\321\213\320\271 \321\202\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_tel_num->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_time->setText(QCoreApplication::translate("Form_ticket", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        label_time->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_date->setText(QCoreApplication::translate("Form_ticket", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_date->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_doctor->setText(QCoreApplication::translate("Form_ticket", "\320\222\321\213 \320\267\320\260\320\277\320\270\321\201\320\260\320\275\321\213 \320\272 \320\262\321\200\320\260\321\207\321\203: ", nullptr));
        label_doctor->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_doctor_->setText(QCoreApplication::translate("Form_ticket", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 :", nullptr));
        label_pasport->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_snils->setText(QCoreApplication::translate("Form_ticket", "\320\241\320\275\320\270\320\273\321\201:", nullptr));
        label_snils->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        label_text_num_polis->setText(QCoreApplication::translate("Form_ticket", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\216\321\201\320\260: ", nullptr));
        label_num_polus->setText(QCoreApplication::translate("Form_ticket", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Form_ticket", "\320\236\320\272\320\265\320\271", nullptr));
        pushButton_print->setText(QCoreApplication::translate("Form_ticket", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_ticket: public Ui_Form_ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_TICKET_H
