#include <iostream>
using namespace std;

class Calculadora {
private:
    double A;
    double B;

public:
    // Constructor
    Calculadora(double a, double b) : A(a), B(b) {}

    // Métodos para realizar operaciones
    double sumar() const {
        return A + B;
    }

    double restar() const {
        return A - B;
    }

    double multiplicar() const {
        return A * B;
    }

    double dividir() const {
        if (B == 0) {
            throw runtime_error("Error: Division por cero no permitida.");
        }
        return A / B;
    }

    // Métodos para establecer los valores de A y B
    void setA(double a) {
        A = a;
    }

    void setB(double b) {
        B = b;
    }

    // Métodos para obtener los valores de A y B
    double getA() const {
        return A;
    }

    double getB() const {
        return B;
    }
};

int main() {
    try {
        double a, b;
        cout << "\nIngrese el valor de A: " << endl;
        cin >> a;
        cout << "Ingrese el valor de B: " << endl;
        cin >> b;

        Calculadora calc(a, b);

        cout << "\nSuma: " << calc.sumar() << endl;
        cout << "Resta: " << calc.restar() << endl;
        cout << "Multiplicacion: " << calc.multiplicar() << endl;
        cout << "Division: " << calc.dividir() << endl;
    }
    catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
