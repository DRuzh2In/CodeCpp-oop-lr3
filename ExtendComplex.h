#pragma once
#include "iostream"
#include "fstream"
#include "ctime"
#include "Complex.h"

using namespace std;

class ExtendComplex : public Complex {

private:
    char *date;

public:
    ExtendComplex(double re, double im) : Complex(re, im) {
        time_t now = time(0);
        date = ctime(&now);

    }

    char *getDate() {
        return date;
    }

    friend ostream &operator<<(ostream &out, ExtendComplex &z) {
        if (z.get_im() < 0) {
            out << "COMPLEX NUMBER: " << z.get_re() << " + (" << z.get_im() << ")i; "
                << "DATE OF CREATION: " << z.getDate();
        } else {
            out << "COMPLEX NUMBER: " << z.get_re() << " + " << z.get_im() << "i; "
                << "DATE OF CREATION: " << z.getDate();
        }
        return out;
    }

    friend ofstream &operator<<(ofstream &os, ExtendComplex z) {
        if (z.get_im() < 0) {
            os << "COMPLEX NUMBER: " << z.get_re() << " + (" << z.get_im() << ")i; "
               << "DATE OF CREATION: " << z.getDate() << endl;
        } else {
            os << "COMPLEX NUMBER: " << z.get_re() << " + " << z.get_im() << "i; "
               << "DATE OF CREATION: " << z.getDate() << endl;
        }
        return os;
    }

    friend void complexOfstream(string failName, ExtendComplex z) {
        try {
            ofstream ofs(failName, ios::app);
            if (!ofs) {
                throw exception();
            } else {
                ofs << z;
            }
        } catch (exception) {
            cerr << "ERROR: Newfile.txt available only for reading" << endl;
        }
    }
};

