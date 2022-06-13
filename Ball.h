#pragma once
#include "Body.h"

class Ball :
    public Body
{
public:
    Ball(double value);
    virtual ~Ball() {};

    virtual double Volume() override;
    virtual double Surface() override;

    virtual void Display();
    virtual void Read();
};

