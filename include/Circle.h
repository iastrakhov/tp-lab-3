#pragma once

#include<iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double radius);
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
};