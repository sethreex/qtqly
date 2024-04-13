#include "mainwindow.h"
#include "ticket.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form_2 = new Form_ticket();
    connect( this, &MainWindow::signal_to_ticket, form_2, &Form_ticket::slot_from_mainwindow );
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::check_all(QString surname, QString name, QString patronymic, QString tel_number, QString pas_num, QString snils, QString num_polis)
{
    for(QChar item : surname){
        if(item.isDigit()) {
            QMessageBox::critical(this,"Ошибка", "В строке Фамилия присутствуют цифра");
            return false;
        }
     }
    for(QChar item : name){
        if(item.isDigit()) {
            QMessageBox::critical(this,"Ошибка", "В строке Имя присутвует цифра");
            return false;
        }
    }
    for(QChar item : patronymic){
        if(item.isDigit()){
            QMessageBox::critical(this,"Ошибка", "В строке Отчество присутвует цифра");
            return false;
        }
    }
    for(QChar item : tel_number){
        if(!item.isDigit()){
            QMessageBox::critical(this, "Ошибка", "В строке контактный телефон присувует буква");
            return false;
        }
    }
    for(QChar item : pas_num){

            if(!item.isDigit() ){
            QMessageBox::critical(this, "Ошибка", "В строке паспортные данные присувует буква");
            return false;
        }
    }

    for(QChar item : snils){

            if(!item.isDigit()){
            QMessageBox::critical(this, "Ошибка", "В строке снилс присувует буква");
            return false;
        }
    }
    for(QChar item : num_polis){
        if(!item.isDigit()){
            QMessageBox::critical(this, "Ошибка", "В строке номере страхового полюса присувует буква");
            return false;
        }
    }
    if(surname.isEmpty()){
    QMessageBox::critical(this, "Ошибка", "Заполните фаимлию");
    return false;
    } else if(name.isEmpty()){
    QMessageBox::critical(this, "Ошибка", "Заполните имя");
    return false;
    } else  if(pas_num.isEmpty()){
    QMessageBox::critical(this, "Ошибка", "Заполните поле паспортные данные ");
    return false;
    }  else if(snils.isEmpty()){
    QMessageBox::critical(this, "Ошибка", "Заполните поле снилс");
    return false;
    } else if(num_polis.isEmpty()){
    QMessageBox::critical(this, "Ошибка", "Заполните поле полюс");
    return false;
    } else if(tel_number.isEmpty()){
    QMessageBox::critical(this, "Ошибка", "Заполните поле контактный телефон");
    return
            false;
    }

    else
    {
        return true;
    }


}
std::vector <Ticket> vec_ticket;


void MainWindow::on_pushButton_zapisatsa_clicked()
{
    QTime time = ui->timeEdit_clock->time();
     QString surname = ui->lineEdit_surname->text();
     QString name = ui->lineEdit_name->text();
     QString patronymic = ui->lineEdit_patronomic->text();
     QDate date_birth = ui->dateEdit_date_of_birth->date();
     QString tel_number = ui->lineEdit_telefon->text();
     QString pas_num = ui->lineEdit_passport->text();
     QString snils = ui->lineEdit_snils->text();
     QString num_polis = ui->lineEdit_srax_polus->text();
     QString doctor = ui->comboBox_doctor->currentText();
     bool sex;
     QDate date = ui->dateEdit_date_recording->date();

     if(check_all(surname,  name, patronymic, tel_number,  pas_num,  snils,  num_polis) == false){
         return;
     }


    if(!ui->checkBox_agreement->isChecked()){
        QMessageBox::critical(this, "Ошибка", "Поставьте галочку согласие");
        return;
    }

    if(ui->checkBox_male->isChecked() && ui->checkBox_female->isChecked())
    {
        QMessageBox::critical(this, "Ошибка", "Введен некоректный пол");
        return;
    }  else if(ui->checkBox_male->isChecked()){
        sex = true;// мужчина
    } else if (ui->checkBox_female){
        sex = false;// женщина
    }


    Ticket ticket = Ticket(time, surname, name, patronymic,date_birth, tel_number, pas_num, snils, num_polis, doctor,sex, date);

    vec_ticket.push_back(ticket);
    emit signal_to_ticket(ticket.id,time, surname, name, patronymic,date_birth, tel_number, pas_num, snils, num_polis, doctor,sex,date);



        ui->lineEdit_surname->clear();
        ui->lineEdit_name->clear();
        ui->lineEdit_patronomic->clear();
        ui->lineEdit_telefon->clear();
        ui->lineEdit_passport->clear();
        ui->lineEdit_snils->clear();
        ui->lineEdit_srax_polus->clear();
        ui->checkBox_female->setCheckState(Qt::Unchecked);
        ui->checkBox_male->setCheckState(Qt::Unchecked);
        ui->checkBox_agreement->setCheckState(Qt::Unchecked);

}

void MainWindow::on_action_triggered()// Меню -> Информация
{
    QMessageBox::information(this,"Информация", "Данная программа создана для записи к врачу. Программа может принимать файл с расширением .txt, который содержит данные для формы, после чего идет заполнение."
                                                           " Также можно заполнить форму вручную."
                                                           " Программа создана в учебных целях студентом 2 курса группы ИВТ-223 Королев Александр Дмитриевич."
                                                           " Используйте с удовольствием.");
}

void MainWindow::on_action_2_triggered()// Меню -> Выход
{
    QApplication::quit();
}

void MainWindow::on_pb_fill_from_txt_clicked()
{
    // Открываем диалоговое окно для выбора текстового файла
    QString filePath = QFileDialog::getOpenFileName(this, tr("Выберите текстовый файл"), "", tr("Текстовые файлы (*.txt)"));

    // Проверяем, был ли выбран файл
    if (!filePath.isEmpty()) {
        QFile file(filePath);

        // Проверяем, удалось ли открыть файл для чтения
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString line;
            QStringList data;

            // Читаем файл построчно и обрабатываем данные
            while (!in.atEnd()) {
                line = in.readLine();
                data = line.split(":"); // Разбиваем строку по разделителю ':'

                // Проверяем, содержит ли строка две части (поле и значение)
                if (data.size() == 2) {
                    QString field = data[0].trimmed(); // Получаем поле, удаляем лишние пробелы
                    QString value = data[1].trimmed(); // Получаем значение, удаляем лишние пробелы

                    // Заполняем соответствующие поля формы данными из файла
                    if (field == "Фамилия")
                        ui->lineEdit_surname->setText(value);
                    else if (field == "Имя")
                        ui->lineEdit_name->setText(value);
                    else if (field == "Отчество")
                        ui->lineEdit_patronomic->setText(value);
                    else if (field == "Дата рождения")
                        ui->dateEdit_date_of_birth->setDate(QDate::fromString(value, "dd.MM.yyyy"));
                    else if (field == "Паспортные данные")
                        ui->lineEdit_passport->setText(value);
                    else if (field == "СНИЛС")
                        ui->lineEdit_snils->setText(value);
                    else if (field == "Номер страхового полиса")
                        ui->lineEdit_srax_polus->setText(value);
                    else if (field == "Контактный номер")
                        ui->lineEdit_telefon->setText(value);
                    else if (field == "Дата записи")
                        ui->dateEdit_date_recording->setDate(QDate::fromString(value, "yyyy-MM-dd"));
                    else if (field == "Пол") {
                        // Устанавливаем флажок в зависимости от значения
                        if (value == "М")
                            ui->checkBox_male->setChecked(true);
                        else if (value == "Ж")
                            ui->checkBox_female->setChecked(true);
                    }
                } else if (data.size() == 4) {
                    // Если строка содержит 4 части, устанавливаем значение времени (здесь просто пример)
                    QString value = "123045";
                    QTime time = QTime::fromString(value, "hhmmss");
                    ui->timeEdit_clock->setTime(time);
                }
            }
            // Закрываем файл после обработки
            file.close();
        }
    }
}

