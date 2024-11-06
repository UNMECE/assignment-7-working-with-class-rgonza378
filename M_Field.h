#ifndef M_FIELD_H
#define M_FIELD_H

class M_Field {
private:
    double *B;

public:
    M_Field();
    M_Field(double Bx, double By, double Bz);
    ~M_Field();

    void setBx(double Bx);
    void setBy(double By);
    void setBz(double Bz);

    double getBx() const;
    double getBy() const;
    double getBz() const;

    double calculateMagnitude() const;
    void calculateUnitVector() const;
};

#endif
