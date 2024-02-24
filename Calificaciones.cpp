
#include <iostream>
using namespace std;

int main() {
    int califn;


    cout << "Ingrese Su Calificacion   (0-100): ";
    cin >> califn;


    char letraCa;
    if (califn >= 90 && califn <= 100) {
        letraCa = 'A';
    } else if (califn >= 80 && califn <= 89) {
        letraCa = 'B';
    } else if (califn >= 70 && califn <= 79) {
        letraCa = 'C';
    } else if (califn >= 60 && califn <= 69) {
        letraCa = D';
    } else if (califn >= 0 && califn <= 59) {
        letraCa = 'F';
    } else {
        cout << "Su Calificación es inválida. Por favor ingrese una calificación entre 0 y 100." << endl;
        return 1;
    }


    cout << "La calificación  es: " << letraCa << endl;

    return 0;
}
