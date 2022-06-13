#pragma once
#include "Body.h"

class Parallelepiped :
    public Body
{
    double b;
    double c;
public:
    Parallelepiped(double, double, double);
    virtual ~Parallelepiped() {};

    double const getB();
    double const getC();
    void setB(double value);
    void setC(double value);

    double Surface() override;
    double Volume() override;

    void Display() override;
    void Read() override;
};

