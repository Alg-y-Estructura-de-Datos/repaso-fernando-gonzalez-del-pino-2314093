#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función para agregar un contacto al vector
void agregarContacto(vector<string>& contactos, const string& nombre, const string& numero) {
    string contacto = nombre + ": " + numero;
    contactos.push_back(contacto); // Agrega el elemento contacto al vector
    cout << "Contacto agregado correctamente" << endl;
}

// Función para mostrar todos los contactos en el vector
void mostrarContactos(const vector<string>& contactos) {
    cout << endl;
    for (int i = 0; i < contactos.size(); i++) {
        cout << contactos[i] << endl;
    }
}

int main() {
    vector<string> contactos;
    int opcion;
    string nombre, numero;

    do {
        cout << "\nMenu de opciones:\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Mostrar contactos\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: " << endl;
        cin >> opcion;

        if (opcion == 1) {
            cout << "\nIngrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el numero de telefono: " << endl;
            cin >> numero;
            agregarContacto(contactos, nombre, numero);
        } else if (opcion == 2) {
            mostrarContactos(contactos);
        }
    } while (opcion != 3);

    return 0;
}
