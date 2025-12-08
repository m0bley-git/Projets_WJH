#include "system_meteo.h"

system_meteo::system_meteo(){
    m_d_vent=0;
    m_d_temp=0;
    m_d_atmo=0;
    m_danger=false;

}

int system_meteo::get_danger() {
    if (m_d_atmo >= 950 || m_d_temp >= 30 || m_d_vent >=16) {
        m_danger = 1;
        if (m_d_atmo >= 1050 || m_d_temp >= 45 || m_d_vent >= 25) {
            m_danger = 2;
        }
    } else {
        m_danger = 0;
    }
    return m_danger;
}

void system_meteo::set_d_vent(int valeur) {
    m_d_vent = valeur;
}

void system_meteo::set_d_temp(int valeur) {
    m_d_temp = valeur;
}

void system_meteo::set_d_atmo(int valeur) {
    m_d_atmo = valeur;
}
