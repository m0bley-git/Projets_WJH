#include "filtre_meteo.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    istringstream iss( "mot1;mot2;mot3;mot4" ); //changer les mots a filtrer
    string mot;
    while ( std::getline( iss, mot, ';' ) ) //changer le ; en un ,
    {
        cout << mot << '\n';
    }
}

//mettre la ligne api en tant que base pour le filtre

filtre_meteo::filtre_meteo()
{

}
