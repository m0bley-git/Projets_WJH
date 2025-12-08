#ifndef SYSTEM_METEO_H
#define SYSTEM_METEO_H

class system_meteo {
public:
    system_meteo();
    //geter
    int get_danger () ;
    //seter
    void set_d_vent (int value);
    void set_d_temp (int value);
    void set_d_atmo (int value);
private:
    int m_d_vent ;
    int m_d_temp ;
    int m_d_atmo ;
    int m_danger ;
};

#endif
