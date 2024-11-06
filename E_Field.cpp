#include <cmath>
#include <iostream>
#include "E_Field.h"

E_Field::E_Field() {
    E = new double[3]{0.0, 0.0, 0.0};
}

E_Field::E_Field(double Ex, double Ey, double Ez) {
    E = new double[3]{Ex, Ey, Ez};
}

E_Field::~E_Field() {
    delete[] E;
}

void E_Field::setEx(double Ex) { E[0] = Ex; }
void E_Field::setEy(double Ey) { E[1] = Ey; }
void E_Field::setEz(double Ez) { E[2] = Ez; }

double E_Field::getEx() const { return E[0]; }
double E_Field::getEy() const { return E[1]; }
double E_Field::getEz() const { return E[2]; }

double E_Field::calculateMagnitude() const {
    return std::sqrt(E[0] * E[0] + E[1] * E[1] + E[2] * E[2]);
}

double E_Field::calculateInnerProduct() const {
    return E[0] * E[0] + E[1] * E[1] + E[2] * E[2];
}

