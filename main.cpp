#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main() {


    ComplexNumberLibrary::INumeriComplessi num1(2.0, 4.0);
    ComplexNumberLibrary::INumeriComplessi num2(3.0, 4.0);


    ComplexNumberLibrary::INumeriComplessi Sum = ComplexNumberLibrary::operator+(num1, num2);

    // Confronto tra i due numeri complessi
    if (num1 == num2) {
        cout << "I numeri complessi sono uguali" << endl;
    } else {
        cout << "I numeri complessi non sono uguali" << endl;
    }

    // coniugato di Sum
    ComplexNumberLibrary::INumeriComplessi coniugatoSum = ComplexNumberLibrary::coniugato(Sum);


    cout << "Somma dei numeri complessi: " << Sum.Real << " + " << Sum.Imag << "i" << endl;
    cout << "Coniugato del numero complesso num1: " << coniugatoSum.Real << " " << coniugatoSum.Imag << "i" << endl;

    return 0;
}
