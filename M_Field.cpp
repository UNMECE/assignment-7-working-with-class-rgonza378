#include <cmath>
#include <iostream>
#include "M_Field.h"

M_Field::M_Field() {
    B = new double[3]{0.0, 0.0, 0.0};
}

M_Field::M_Field(double Bx, double By, double Bz) {
    B = new double[3]{Bx, By, Bz};
}

M_Field::~M_Field() {
    delete[] B;
}

void M_Field::setBx(double Bx) { B[0] = Bx; }
void M_Field::setBy(double By) { B[1] = By; }
void M_Field::setBz(double Bz) { B[2] = Bz; }

double M_Field::getBx() const { return B[0]; }
double M_Field::getBy() const { return B[1]; }
double M_Field::getBz() const { return B[2]; }

double M_Field::calculateMagnitude() const {
    return std::sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
}

void M_Field::calculateUnitVector() const {
    double magnitude = calculateMagnitude();
    if (magnitude > 0) {
        std::cout << "Unit Vector: (" << B[0] / magnitude << ", "
                  << B[1] / magnitude << ", " << B[2] / magnitude << ")\n";
    } else {
        std::cout << "Zero vector has no unit vector.\n";
    }
}

