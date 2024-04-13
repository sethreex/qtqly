/****************************************************************************
** Meta object code from reading C++ file 'form_ticket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../App/form_ticket.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_ticket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSForm_ticketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSForm_ticketENDCLASS = QtMocHelpers::stringData(
    "Form_ticket",
    "slot_from_mainwindow",
    "",
    "id",
    "time",
    "surname",
    "name",
    "patronymic",
    "date_birth",
    "tel_number",
    "pas_num",
    "snils",
    "num_polis",
    "doctor",
    "sex",
    "date",
    "on_pushButton_clicked",
    "on_pushButton_print_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSForm_ticketENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[12];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[5];
    char stringdata5[8];
    char stringdata6[5];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[11];
    char stringdata10[8];
    char stringdata11[6];
    char stringdata12[10];
    char stringdata13[7];
    char stringdata14[4];
    char stringdata15[5];
    char stringdata16[22];
    char stringdata17[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSForm_ticketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSForm_ticketENDCLASS_t qt_meta_stringdata_CLASSForm_ticketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Form_ticket"
        QT_MOC_LITERAL(12, 20),  // "slot_from_mainwindow"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 2),  // "id"
        QT_MOC_LITERAL(37, 4),  // "time"
        QT_MOC_LITERAL(42, 7),  // "surname"
        QT_MOC_LITERAL(50, 4),  // "name"
        QT_MOC_LITERAL(55, 10),  // "patronymic"
        QT_MOC_LITERAL(66, 10),  // "date_birth"
        QT_MOC_LITERAL(77, 10),  // "tel_number"
        QT_MOC_LITERAL(88, 7),  // "pas_num"
        QT_MOC_LITERAL(96, 5),  // "snils"
        QT_MOC_LITERAL(102, 9),  // "num_polis"
        QT_MOC_LITERAL(112, 6),  // "doctor"
        QT_MOC_LITERAL(119, 3),  // "sex"
        QT_MOC_LITERAL(123, 4),  // "date"
        QT_MOC_LITERAL(128, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(150, 27)   // "on_pushButton_print_clicked"
    },
    "Form_ticket",
    "slot_from_mainwindow",
    "",
    "id",
    "time",
    "surname",
    "name",
    "patronymic",
    "date_birth",
    "tel_number",
    "pas_num",
    "snils",
    "num_polis",
    "doctor",
    "sex",
    "date",
    "on_pushButton_clicked",
    "on_pushButton_print_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSForm_ticketENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,   13,   32,    2, 0x0a,    1 /* Public */,
      16,    0,   59,    2, 0x08,   15 /* Private */,
      17,    0,   60,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QTime, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDate, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QDate,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Form_ticket::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSForm_ticketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSForm_ticketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSForm_ticketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Form_ticket, std::true_type>,
        // method 'slot_from_mainwindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTime, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_print_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Form_ticket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form_ticket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_from_mainwindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[13]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_print_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Form_ticket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_ticket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSForm_ticketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Form_ticket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
