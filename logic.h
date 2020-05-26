#ifndef LOGIC_H
#define LOGIC_H

#include <QObject>

class Logic: public QObject
{
public:
    Logic(QObject * parent);


signals:
    void newCoords();

};

#endif // LOGIC_H
