#include <algorithm>
#include <sstream>
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

    int mes = 0;
    int anno = 0;

    if (tiempoTXT.find("A") != 0) {

        anno = stoi(tiempoTXT.substr(0, tiempoTXT.find("A")));
        if (anno > 0)
            return mes = anno * 12;
    } else
        mes = stoi(tiempoTXT.substr(0, tiempoTXT.find("M")));
    return mes;


}

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {

    float porcento = 0;
    int buscarPorcento = porcentajeTXT.find("%");
    if (porcentajeTXT.find("%") != 0)
        porcento = std::stof(porcentajeTXT.substr(0, buscarPorcento));
    if (porcento > 0)

        porcento = porcento / 100;

    return porcento;


}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {


    monto = balance;
    string convertir ="";
    convertir = to_string(tasaAnual);
    tasaAnual = obtenerPorcentaje(convertir);
    return (balance * tasaAnual) / 12;


    return 0;
}

float CalculoPrestamo::getMonto() const {
    return 0;
}

void CalculoPrestamo::setMonto(float monto) {

}


string CalculoPrestamo::reportCalculoPrestamos(std::string tiempoTXT, std::string porcentajeTXT) {

    float balance = getMonto();
    float balanceNuevo = getMonto();
    float porcentaje = obtenerPorcentaje(porcentajeTXT);
    int meses = CalcularTiempoEnMeses(tiempoTXT) + 1;
    std::string reporte = "";
    float interes = calcularInteresMensual(balanceNuevo, porcentaje);
    for (int mes = 1; mes < mes; ++mes) {
        balance = +interes;

        reporte = reporte + "Tasa[" + porcentajeTXT + "], mes [" + std::to_string(mes) + "] balance inicial [" +
                  std::to_string(balance) + "]interes[" + std::to_string(interes) + "balace nuevo" +
                  std::to_string(balanceNuevo);
    }
    return reporte;

}









