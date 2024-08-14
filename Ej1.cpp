#include <iostream>
using namespace std;

void intercambiar( double &j1, double &j2){
    double temp = j1;
    j1 = j2;
    j2 = temp;
}

int main() {
double j1, j2;

    cout << "\nIngrese la cantidad de jugo de naranja en ml: " << endl;
    cin >>j1;
    cout << "Ingrese la cantidad de jugo de manzana en ml: " << endl;
    cin >>j2;

    intercambiar(j1, j2);

    cout << "\nContenido de los vasos luego del intercambio: " << endl;
    cout << "Naranja: " << j1 << "ml" << endl;
    cout << "Manzana: " << j2 << "ml" << endl;

    return 0;
}
