#ifndef __ComplexNumber_H
#define __ComplexNumber_H

#include <iostream>

using namespace std;

namespace ComplexNumberLibrary{
struct INumeriComplessi{
    double Real;
    double Imag;

    // costruttore
    INumeriComplessi(double a, double b) : Real(a), Imag(b) {}
};


INumeriComplessi operator+(const INumeriComplessi& Real, const INumeriComplessi& Imag);


bool operator ==(const INumeriComplessi& Real, const INumeriComplessi& Imag);


INumeriComplessi coniugato(const INumeriComplessi& numero) ;

}
#endif
