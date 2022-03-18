#pragma once
#include <string>
#include <iostream>

using namespace std;

class Triangle
{
private:
    int a, b, c;
public:
    void set_a(int value) { a = value; };
    void set_b(int value) { b = value; };
    void set_c(int value) { c = value; };
    
    int get_a() { return a; };
    int get_b() { return b; };
    int get_c() { return c; };
    
    void angles();
    int perimeter();
    string toString(int);
};
