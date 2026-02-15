#include <iostream>
#include <windows.h>
using namespace std;
bool esBisiesto(int anio) {
    
    return (anio % 4 ==0 && anio%100!=0) || (anio % 400==0);
}
bool sumaDigitos(int anio) {
    int suma=0;
    int aux=anio;
    while(aux>0) {
        suma +=aux % 10;
        aux/=10;
    }
    return suma % 4==0;
}
int main () {
    SetConsoleOutputCP(CP_UTF8);
    int anio1, anio2, cont=0;
    cout << "Año inicial: "; cin >>anio1;
    cout << "Año final: "; cin >>anio2;

    for (int i=anio1; i<=anio2; i++) {
        if (esBisiesto(i)&&sumaDigitos(i)) {
            cont++;
        }
    }
    cout <<"Cantidad de años que cumplen ambas condicones: " <<cont;
    return 0;
}