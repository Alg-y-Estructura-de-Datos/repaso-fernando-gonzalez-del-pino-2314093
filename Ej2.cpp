#include <iostream>
using namespace std;

/*
int factorialBucle(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;
    cout << "\nIntroduce un numero entero positivo: " << endl;
    cin >> numero;

    if (numero < 0) {
        cout << "El numero debe ser entero positivo" << endl;
    } else {
        cout << "El factorial de " << numero << " usando bucle es: " << factorialBucle(numero) << endl;
    }

    return 0;
}
*/


int factorialRecursivo(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorialRecursivo(n - 1);
    }
}

int main() {
    int numero;
    cout << "\nIntroduce un numero entero positivo: " << endl;
    cin >> numero;

    if (numero < 0) {
        cout << "El numero debe ser entero positivo" << endl;
    } else {
        cout << "El factorial de " << numero << " usando recursividad es: " << factorialRecursivo(numero) << endl;
    }

    return 0;
}
