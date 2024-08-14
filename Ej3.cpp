#include <iostream>
using namespace std;

void marcarAsiento(bool* asiento) {
    *asiento = true;
}

int main() {
    const int numAsientos = 10;
    bool asientos[numAsientos] = {false};

    cout << "\nEstado inicial de los asientos:\n";
    for (int i = 0; i < numAsientos; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << endl;
    }

    int eleccion;
    cout << "\nIntroduce el numero del asiento que deseas reservar (1-" << numAsientos << "): " << endl;
    cin >> eleccion;


    if (eleccion < 1 || eleccion > numAsientos) {
        cout << "Numero de asiento no válido." << endl;
    } else {

        marcarAsiento(&asientos[eleccion - 1]);

        cout << "\nEstado de los asientos despues de la reserva:\n";
        for (int i = 0; i < numAsientos; ++i) {
            cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << endl;
        }
    }

    return 0;
}
