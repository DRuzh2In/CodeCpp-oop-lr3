#include <iostream>
#include "ExtendComplex.h"
#include "Extend.h"


using namespace std;

int main() {
    ExtendComplex firstComplex(2, -5);
    cout << firstComplex;
    complexOfstream("Complex.txt", firstComplex);

    ExtendComplex secondComplex(6, 7);
    cout << secondComplex << endl;
    complexOfstream("Complex.txt", secondComplex);

    cout << "Sum of complex numbers" << endl;
    ExtendComplex sum = Complex::sum(firstComplex, secondComplex);
    cout << sum << endl;
    complexOfstream("Complex.txt", sum);

    cout << "Subtraction of complex numbers" << endl;
    ExtendComplex sub = Complex::sub(firstComplex, secondComplex);
    cout << sub << endl;
    complexOfstream("Complex.txt", sub);

    cout << "Multiplication of complex numbers" << endl;
    ExtendComplex mult = Complex::mult(firstComplex, secondComplex);
    cout << mult << endl;
    complexOfstream("Complex.txt", mult);

    cout << "Division of complex numbers" << endl;
    ExtendComplex div = Complex::div(firstComplex, secondComplex);
    cout << div << endl;
    complexOfstream("Complex.txt", div);

    complexOfstream("Newfile.txt", div);


    Extend extend(2, 6);
    cout << extend.get_count() << endl;
};

