#include "Triangle.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include <math.h>
#define PI 3.14159265

using namespace std;

void Triangle::angles()
{
    int a = get_a();
    int b = get_b();
    int c = get_c();

    double d1 = a;
    double d2 = b;
    double d3 = c;

    if(b > d1)
    {
        d1 = b;
        d2 = a;
    }
    if(c > d1)
    {
        d1 = c;
        d2 = a;
        d3 = b;
    }
    
    double alfa = 90;
    double be = d2 / d1;
    double ga = d3 / d1;
    double beta = asin(be) * 180.0 / PI;;
    double gama = asin(ga) * 180.0 / PI;;
    alfa = round(alfa);
    beta = round(beta);
    gama = round(gama);
    
    string alfa_str = toString(alfa);
    string beta_str = toString(beta);
    string gama_str = toString(gama);

    cout << "Angles value: " << alfa_str << ", " << beta_str << ", " << gama_str << endl;
    
}

int Triangle::perimeter()
{
    int perimeter = get_a() + get_b() + get_c();
    return perimeter;
}


string Triangle::toString(int a)
{
    stringstream ss1;
    ss1 << a;
    string str1 = ss1.str();
    return str1 + "°";
}
