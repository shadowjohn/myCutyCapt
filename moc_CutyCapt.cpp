/****************************************************************************
** Meta object code from reading C++ file 'CutyCapt.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "CutyCapt.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CutyCapt.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CutyPage_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CutyPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CutyPage_t qt_meta_stringdata_CutyPage = {
    {
QT_MOC_LITERAL(0, 0, 8) // "CutyPage"

    },
    "CutyPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CutyPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CutyPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CutyPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWebPage::staticMetaObject>(),
    qt_meta_stringdata_CutyPage.data,
    qt_meta_data_CutyPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CutyPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CutyPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CutyPage.stringdata0))
        return static_cast<void*>(this);
    return QWebPage::qt_metacast(_clname);
}

int CutyPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CutyCapt_t {
    QByteArrayData data[13];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CutyCapt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CutyCapt_t qt_meta_stringdata_CutyCapt = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CutyCapt"
QT_MOC_LITERAL(1, 9, 16), // "DocumentComplete"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 2), // "ok"
QT_MOC_LITERAL(4, 30, 22), // "InitialLayoutCompleted"
QT_MOC_LITERAL(5, 53, 29), // "JavaScriptWindowObjectCleared"
QT_MOC_LITERAL(6, 83, 7), // "Timeout"
QT_MOC_LITERAL(7, 91, 7), // "Delayed"
QT_MOC_LITERAL(8, 99, 15), // "handleSslErrors"
QT_MOC_LITERAL(9, 115, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 130, 5), // "reply"
QT_MOC_LITERAL(11, 136, 16), // "QList<QSslError>"
QT_MOC_LITERAL(12, 153, 6) // "errors"

    },
    "CutyCapt\0DocumentComplete\0\0ok\0"
    "InitialLayoutCompleted\0"
    "JavaScriptWindowObjectCleared\0Timeout\0"
    "Delayed\0handleSslErrors\0QNetworkReply*\0"
    "reply\0QList<QSslError>\0errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CutyCapt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    2,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,

       0        // eod
};

void CutyCapt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CutyCapt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DocumentComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->InitialLayoutCompleted(); break;
        case 2: _t->JavaScriptWindowObjectCleared(); break;
        case 3: _t->Timeout(); break;
        case 4: _t->Delayed(); break;
        case 5: _t->handleSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CutyCapt::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CutyCapt.data,
    qt_meta_data_CutyCapt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CutyCapt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CutyCapt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CutyCapt.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CutyCapt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
