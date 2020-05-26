#ifndef LANGRETRIEVER_H
#define LANGRETRIEVER_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonArray>

class LangRetriever
{
public:
    LangRetriever();
    QList<QString> retrieveArrayFromJson(QString filename);
};

#endif // LANGRETRIEVER_H
