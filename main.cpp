#include <iostream>
#include "CalculoPrestamo.h"

int main() {

    string porcento;

    CalculoPrestamo V1(300000);

    cout << endl << endl << endl << endl;

    cout <<endl;
    std::string reporte;
    reporte = V1.reportCalculoPrestamos("1A","8.40");
    cout<< reporte << std::endl;



//CalculoPrestamo.Obj(30000);
//
//std::string reporte;
//
//reporte= obj.reporteCalculo("1A","8.40%");
//
//std::cout << "Calcular prestamo: " <<std::endl;
//std::cout << reporte << std::endl;
//return 0;
//
    return 0;
}