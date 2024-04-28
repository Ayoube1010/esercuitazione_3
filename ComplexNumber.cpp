#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary{

INumeriComplessi operator+(const INumeriComplessi& a, const INumeriComplessi& b) {
    return INumeriComplessi(a.Real + b.Real, a.Imag + b.Imag);
}

bool operator==(const INumeriComplessi& a, const INumeriComplessi& b) {
    return (a.Real == b.Real) && (a.Imag == b.Imag);
}

INumeriComplessi coniugato(const INumeriComplessi& num) {
    return INumeriComplessi(num.Real, -num.Imag);
}


}



