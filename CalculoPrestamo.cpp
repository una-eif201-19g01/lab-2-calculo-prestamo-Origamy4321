#include <algorithm>
#include "CalculoPrestamo.h"

/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Clase de Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */



CalculoPrestamo::CalculoPrestamo() {}

CalculoPrestamo::CalculoPrestamo(float monto) : monto(monto) {}

float CalculoPrestamo::CalcularTiempoEnMeses(std::string tiempoTXT) {
 tiempoTXT="1A";
if(tiempoTXT.find("A"))
   std::string str = tiempoTXT.substr(0,1);
return std::stof(tiempoTXT)*12;

}

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {

    porcentajeTXT="8.40%";
    std::string str = porcentajeTXT.substr(0,4);
    return std::stof(porcentajeTXT)/100;

    return 0;
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {

monto=balance;
tasaAnual=0.084;

return (balance*tasaAnual)/12;



    return 0;
}

float CalculoPrestamo::getMonto() const {
    return 0;
}

void CalculoPrestamo::setMonto(float monto) {

}

string CalculoPrestamo::reportCalculoPrestamos(std::string tiempoTXT, std::string porcentajeTXT) {





    return std::__cxx11::string();
}

float CalculoPrestamo::MariaJuana(float intelec) {

    return 0;
}




