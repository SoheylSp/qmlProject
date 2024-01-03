#ifndef MYCPPMODEL_H
#define MYCPPMODEL_H

#include <QObject>
#include <QDebug>
#include <QTime>
#include <QTimer>
#include <QQmlContext>

class MyCppModel : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)



public:
    explicit MyCppModel(QObject *parent = nullptr);


    QString name () const ;

    void setName(const QString name);




signals:

    void nameChanged();



private:
    QString m_name = "Soheyll" ;

public slots :

    void update() ;


};

#endif // MYCPPMODEL_H
