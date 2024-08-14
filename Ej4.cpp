#include <iostream>
using namespace std;

int suma(int a, int b){
    return a+b;
}

double area(double r){
    return r*(3.14)*r;
}

double potencia(double base, double exponente){
    double resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int menu(int opcion){
    cout << "\nMenu de opciones:\n";
    cout << "1. Sumar dos enteros\n";
    cout << "2. Calcular el area de un circulo\n";
    cout << "3. Calcular la potencia de un numero\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: " << endl;
    cin >> opcion;
    return opcion;
}

int main() {
    int opcion;

    do {
    switch (menu(opcion)) {
        case 1: {
            int a, b;
            cout << "Ingrese el primer entero: " << endl;
            cin >> a;
            cout << "Ingrese el segundo entero: " << endl;
            cin >> b;
            cout << "La suma es: " << suma(a, b) << endl;
            break;
        }
        case 2: {
            double radio;
            cout << "Ingrese el radio del circulo: " << endl;
            cin >> radio;
            cout << "El area del circulo es: " << area(radio) << endl;
            break;
        }
        case 3: {
            double base;
            int exponente;
            cout << "Ingrese la base: " << endl;
            cin >> base;
            cout << "Ingrese el exponente: " << endl;
            cin >> exponente;
            cout << "El resultado es: " << potencia(base, exponente) << endl;
            break;
        }
        case 4:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion no valida. Intente nuevamente.\n";
    }
    } while(opcion != 4);

    return 0;
}