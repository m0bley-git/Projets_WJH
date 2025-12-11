#include <QDebug>

#ifndef FILTRE_METEO_H
#define FILTRE_METEO_H


class filtre_meteo
{
public:
    filtre_meteo();
    QString   trieData(QString Databrut);

    double getVitesse_vent() const;
    double getTemperature() const;
    double getPression_atmo() const;

private :
    QString m_data_non_filtr;
    double m_vitesse_vent;
    double m_temperature;
    double m_pression_atmo;
    double kmENnoeuds(double kmh) const;
};

#endif // FILTRE_METEO_H
