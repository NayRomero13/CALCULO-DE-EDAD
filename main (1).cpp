/******************************************************************************

               Autor: Nalleli Arenas Romero
               Fecha: 26 de marzo de 2026
               Descripcion: Se realiza calculo de la edad de una persona para determinar si es o no mayor de edad

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Bienvenido " << nombre << ", eres mayor de edad." << endl;
    } else {
        cout << "Bienvenido " << nombre << ", eres menor de edad." << endl;
    }

    return 0;
}

    