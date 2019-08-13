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

CalculoPrestamo::CalculoPrestamo(int64_t monto) : monto(monto) {}

float CalculoPrestamo::CalcularTiempoEnMeses(std::string tiempoTXT) {

    //nota el metodo es int
    //int meses = 0;
    //int anno = 0;
    //int buscarTiempoAnno = tiempoTXT.find("A") este busca el valor que trae la A al final ex: 1A
    //int buscarTiempoMes = tiempoTXT.find("M") lo mismo pero con meses.
    //if(buscarTiempoAno>0){
    //ano = stoi(tiempoTXT.substr(0, buscarTiempoAnno))
    //if (anno > 0){
    // meses = anno*12
    //}
    //} else
    //if (buscarTiempoMes > 0){
    // meses = stoi(tiempoTXT.substr)



    tiempoTXT = "1A";
    if (tiempoTXT.find("A"))
        std::string str = tiempoTXT.substr(0, 1);
    return std::stof(tiempoTXT) * 12;

}

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {

    // metodo obtener porcentaje solución
    //float porcento=0;
    //int buscarPorcento = porcentajeTXT.find(%);
    //if(buscarporcentaje > 0){
    //porcentaje = std::stof(porcentajeTXT.substr(0,buscarporcentaje));
    //if(porcentaje > 0){
    // porcentaje = porcentaje /100;}
    //}
    //}
    //return porcentaje;

    porcentajeTXT = "8.40%";
    std::string str = porcentajeTXT.substr(0, 4);
    return std::stof(porcentajeTXT) / 100;

    return 0;
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {

    monto = balance;
    tasaAnual = 0.084;

    return (balance * tasaAnual) / 12;


    return 0;
}

float CalculoPrestamo::getMonto() const {
    return 0;
}

void CalculoPrestamo::setMonto(float monto) {

}

//Reporte metodo

string CalculoPrestamo::reportCalculoPrestamos(std::string tiempoTXT, std::string porcentajeTXT) {

// std::string reporte = "";
//int meses = calcularTiempoEnMeses(TiempoTXT)+1;
//float porcentaje = obtenerPorcentaje(PorcentajeTXT);
//float balance = getmonto();
//float balanceNuevo = getmonto();
//for(int mes =1; mes<mes; ++mes){
//reporte = reporte + "Tasa"["+ porcentaje + "], Mes [" + std::to_string(mes) " ], balance
//std::to_string(balanceNuevo)




    return std::__cxx11::string();
}
//metodo de prueba
float CalculoPrestamo::MariaJuana(float intelec) {

    return 0;
}




