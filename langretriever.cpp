#include "langretriever.h"

#include <QFile>
#include <QDebug>
#include <QJsonObject>

LangRetriever::LangRetriever()
{

}




QList<QString> LangRetriever::retrieveArrayFromJson(QString filename)
{

    QStringList list;
    QFile inputFile(":/" + filename+".json");
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            list.append(line);
        }
        inputFile.close();

        qDebug()<<list;



    }
    return list;
}
