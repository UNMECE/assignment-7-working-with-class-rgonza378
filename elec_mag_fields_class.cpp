#include <iostream>
#include <cmath>
using namespace std;

// Electric Field Class starts here

class Electric_Field
{
private:
		double *E;

public:
// Constructor default
		Electric_Field()
		{
				E = new double[3];
				E[0] = E[1] = E[2] = 0.0;
		}

// Constructor with the components implemented
		Electric_Field(double Ex, double Ey, double Ez)
		{
				E = new double[3];
				E[0] = Ex;
				E[1] = Ey;
				E[2] = Ex;
		}
// Destructor
		~Electric_Field()
		{
				delete[] E;
		}
// Getters
		double getX() const { return E[0]; }
		double getY() const { return E[1]; }
		double getZ() const { return E[2]; }
// Setters
		void setX(double Ex) { E[0] = Ex; }
		void setY(double Ey) { E[1] = Ey; }
		void setZ(double Ez) { E[2] = Ez; }

		double calculateMagnitude() const
		{
				return sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
		}

		double calculateInnerProduct() const
		{
				return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
		}

		void display() const
		{
				cout << "E = (" << E[0] << ", " << E[1] << ", " << E[2] << ")" << endl;
		}
};

// Magnetic Field Class starts here

class Magnetic_Field
{
private:
		double *B;

public:
// Constructor default
		Magnetic_Field()
		{
				B = new double[3];
				B[0] = B[1] = B[2] = 0.0;
		}
// Constructor with components added
		Magnetic_Field(double Bx, double By, double Bz)
		{
				B = new double[3];
				B[0] = Bx;
				B[1] = By;
				B[2] = Bz;
		}
// Destructor
		~Magnetic_Field()
		{
				delete[] B;
		}
// Getters
		double getX() const { return B[0]; }
		double getY() const { return B[1]; }
		double getZ() const { return B[2]; }
// Setters
		void setX(double Bx) { B[0] = Bx; }
		void setY(double By) { B[1] = By; }
		void setZ(double Bz) { B[2] = Bz; }

		double calculateMagnitude() const
		{
				return sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
		}

		void calculateUnitVector() const
		{
				double mag = calculateMagnitude();
				if (mag == 0)
				{
						cout << "No unit vector is defined, so the magnetic field is zero." << endl;
						return;
				}

				double ux = B[0] / mag;
				double uy = B[1] / mag;
				double uz = B[2] / mag;

				cout << "Unit vector of B = (" << ux << ", " << uy << ", " << uz << ")" << endl;
		}
// Display components
		void display() const
		{
				cout << "B = (" << B[0] << ", " << B[1] << ", " << B[2] << ")" << endl;
		}
};

// Main function starts here

int main()
{
		cout << fixed;
		cout.precision(3);

// default constructors
		Electric_Field E_default;
		Magnetic_Field B_default;

// constructors with parameters set
		Electric_Field E_components(1e5, 10.9, 1.7e2);
		Magnetic_Field B_components(0.5, 1.2, 2.0);

		Electric_Field E_set;
		E_set.setX(4.0);
		E_set.setY(5.0);
		E_set.setZ(6.0);

		Magnetic_Field B_set;
		B_set.setX(3.0);
		B_set.setY(4.0);
		B_set.setZ(5.0);

// output of all functions
		cout << "---- Electric Fields ----" << endl;
    E_default.display();
    cout << "Magnitude: " << E_default.calculateMagnitude() << endl;
    cout << "Inner Product: " << E_default.calculateInnerProduct() << endl << endl;

    E_components.display();
    cout << "Magnitude: " << E_components.calculateMagnitude() << endl;
    cout << "Inner Product: " << E_components.calculateInnerProduct() << endl << endl;

    E_set.display();
    cout << "Magnitude: " << E_set.calculateMagnitude() << endl;
    cout << "Inner Product: " << E_set.calculateInnerProduct() << endl << endl;

    cout << "---- Magnetic Fields ----" << endl;
    B_default.display();
    cout << "Magnitude: " << B_default.calculateMagnitude() << endl;
    B_default.calculateUnitVector();
    cout << endl;

    B_components.display();
    cout << "Magnitude: " << B_components.calculateMagnitude() << endl;
    B_components.calculateUnitVector();
    cout << endl;

    B_set.display();
    cout << "Magnitude: " << B_set.calculateMagnitude() << endl;
    B_set.calculateUnitVector();

    return 0;
}
