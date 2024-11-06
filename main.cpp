#include <iostream>
#include "E_Field.h"
#include "M_Field.h"

int main() {
    E_Field E_default;
    E_Field E_components(1e5, 10.9, 1.7e2);

    std::cout << "Electric Field Magnitude (default): " << E_default.calculateMagnitude() << "\n";
    std::cout << "Electric Field Magnitude (components): " << E_components.calculateMagnitude() << "\n";
    std::cout << "Electric Field Inner Product: " << E_components.calculateInnerProduct() << "\n";

    M_Field B_default;
    M_Field B_components(5.2, 2.3, 3.1);

    std::cout << "Magnetic Field Magnitude (default): " << B_default.calculateMagnitude() << "\n";
    std::cout << "Magnetic Field Magnitude (components): " << B_components.calculateMagnitude() << "\n";
    B_components.calculateUnitVector();

    return 0;
}

