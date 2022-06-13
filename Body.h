#pragma once

class Body
{
	double a;
public:
	virtual ~Body() = 0 {};

	double const getA() { return a; };
	void setA(double value) { a = value; };

	virtual double Surface() = 0;
	virtual double Volume() = 0;

	virtual void Display() = 0;
	virtual void Read() = 0;
};

