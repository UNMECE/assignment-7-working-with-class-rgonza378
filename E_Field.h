#ifndef E_FIELD_H
#define E_FIELD_H

class E_Field {
private:
    double *E;

public:
    E_Field();
    E_Field(double Ex, double Ey, double Ez);
    ~E_Field();

    void setEx(double Ex);
    void setEy(double Ey);
    void setEz(double Ez);

    double getEx() const;
    double getEy() const;
    double getEz() const;

    double calculateMagnitude() const;
    double calculateInnerProduct() const;
};

#endif

