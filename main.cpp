#include <iostream>
#include "CalculoPrestamo.h"

int main() {

    string porcento;

    CalculoPrestamo V1(300000);

    cout<<endl<<endl<<endl<<endl;

    cout<<"hasta luego mari carmen nos vemos en mcdonald"<<endl;
    cout<<V1.obtenerPorcentaje("8.40%");
    cout<<endl<<endl<<endl;
    cout<<V1.CalcularTiempoEnMeses("1A");
    cout<<endl<<endl<<endl;
    cout<<V1.calcularInteresMensual(30000,0.084);




    return 0;
}