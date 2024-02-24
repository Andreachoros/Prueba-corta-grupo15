#include <iostream>


unsigned long long factorial(int n) {
    unsigned long long factd = 1;
    for (int i = 1; i <= n; ++i) {
        factd *= i;
    }
    return factd;
}

int main() {
    int numB;


    std::cout << "Digite un número para calcular el factorial: ";
    std::cin >> numB;


    if (numB < 0) {
        std::cout << "No se puede calcular el factorial porque su  número es negativo.\n";
        return 1;
    }


    unsigned long long fact = factorial(numB);
    std::cout << "El factorial de " << numB << " es: " << fact << std::endl;

    return 0;
}
