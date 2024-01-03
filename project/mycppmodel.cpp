#include "mycppmodel.h"

MyCppModel::MyCppModel(QObject *parent) : QObject(parent)
{


    QTimer *timer = new QTimer () ;
    MyCppModel *myModel = new MyCppModel() ;

    connect(timer,SIGNAL(timeout()),myModel,SLOT(update));

    timer->start(1000) ;

}

QString MyCppModel::name() const
{
    return m_name ;
}

void MyCppModel::setName(const QString name)
{
    if(m_name != name ){

        m_name = name ;
        emit nameChanged();


    };
}

void MyCppModel::update()
{
    m_name = QTime::currentTime().toString();
}



