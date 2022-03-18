#pragma once
#include <string>
#include <iostream>
#include "Triangle.hpp"

using namespace std;

class RightAngled
{
private:
    Triangle triangle;
    double area;
public:
    
    void set_area(double value) { area = value; };
    double get_area() { return area; };
    
    bool Init(int a, int b, int c);
    void Read(Triangle& triangle);
    void Display(Triangle& triangle);
    
    void area_calculate(Triangle& triangle);
    void call()
        {
            Read(triangle);
            Display(triangle);
        }
};
