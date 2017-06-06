#pragma once
#include "ExtendComplex.h"


using namespace std;
class Extend : public ExtendComplex{

private:
    int static count;

public:
    Extend(double re, double im) : ExtendComplex(re, im) {
        count++;
    }

    int get_count() {
        return count;
    }

    void set_count(int count){
        this->count = count;
    }
};
int Extend::count = 0;


