#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QStringList>
#include <QMessageBox>
#include <QString>
#include "Stack.h"
#include <QChar>
#include <QDebug>
#include <wchar.h>
#include <QList>
#include <string.h>
#include <string>
QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();
    int opr_priority (QChar ch) ;
    QList<QString> infixtopostfix (QString infix) ;
    bool isnum (QString input ) ;
    bool isopr (QString input ) ;
private:
    Ui::calculator *ui;
};
#endif // CALCULATOR_H
