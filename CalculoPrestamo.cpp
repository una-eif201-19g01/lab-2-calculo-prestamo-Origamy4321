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

int CalculoPrestamo::CalcularTiempoEnMeses(std::string tiempoTXT) {
    return 0;
}

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
    return 0;
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
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
