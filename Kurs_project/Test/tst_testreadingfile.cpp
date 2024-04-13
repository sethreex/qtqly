#include <QtTest>

// add necessary includes here

class TestReadingFile : public QObject
{
    Q_OBJECT

public:
    TestReadingFile();
    ~TestReadingFile();

private slots:
    void test_case1(); // Метод для тестирования чтения файла

};

TestReadingFile::TestReadingFile()
{

}

TestReadingFile::~TestReadingFile()
{

}

void TestReadingFile::test_case1()
{
    QString filePath = "C:\\Qt\\cods\\Kurs_project\\test.txt"; // Укажите путь к вашему файлу
    QFile file(filePath);

    // Проверка на успешное открытие файла
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QFAIL("Could not open file");
    }

    QTextStream in(&file);
    QString line;
    QStringList data;

    QString expectedSurname = "Козлов"; // Ожидаемая фамилия
    QString expectedName = "Петр"; // Ожидаемое имя
    QString expectedPatronomic = "Сергеевич"; // Ожидаемое отчество

    // Чтение файла и проверка значений
    while (!in.atEnd()) {
        line = in.readLine();
        data = line.split(":");
        if (data.size() == 2) {
            QString field = data[0].trimmed();
            QString value = data[1].trimmed();
            if (field == "Фамилия") {
                QCOMPARE(value, expectedSurname); // Сравниваем фактическое значение с ожидаемым
            } else if (field == "Имя") {
                QCOMPARE(value, expectedName); // Сравниваем фактическое значение с ожидаемым
            } else if (field == "Отчество") {
                QCOMPARE(value, expectedPatronomic); // Сравниваем фактическое значение с ожидаемым
            }
            // Добавьте проверки для других полей, если необходимо...
        }
    }

    file.close(); // Закрытие файла после чтения
}

QTEST_APPLESS_MAIN(TestReadingFile) // Определение точки входа для тестов

#include "tst_testreadingfile.moc" // Включение генерированного moc-файла

