/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Encabezado de la clase Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

#ifndef LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_LIBROCALIFICACIONES_H


class CalculoPrestamo {

    float monto;




public:

//Constructor Default

    CalculoPrestamo();

    CalculoPrestamo(float monto);

    float CalcularTiempoEnMeses(std::string tiempoTXT);

    float obtenerPorcentaje(std::string porcentajeTXT);

    float calcularInteresMensual(float balance, float tasaAnual);

    float MariaJuana(float intelec);

    float getMonto() const;

    void setMonto(float monto);

    string reportCalculoPrestamos(std::string tiempoTXT, std::string porcentajeTXT);


};

#endif //LIBROCALIFICACIONES_LIBROCALIFICACIONES_H

