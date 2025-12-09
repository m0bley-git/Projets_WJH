#ifndef API_H
#define API_H
#include <QDebug>

class API

{
public:
    API();
    //geter
    QString getville();
    QString getAPIkey();
    QString getmeteo_data();

    QString apiRequest(QString m_API_key,QString m_ville );
    //seter
    void setAPIkey(QString api_key);
    void setville(QString ville);
    void setmeteo_data(QString data);



private:
    QString m_API_key;
    QString m_ville;
    QString m_meteo_data;


};

#endif // API_H
