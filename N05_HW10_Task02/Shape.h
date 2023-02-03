#pragma once

#include <iostream>

class Shape
{
protected:
    int edges;
    std::string name;
public:
    Shape() {
        name = "������";
        edges = 0;
    }
    Shape(int a) {
        edges = a;
        //name = "����������";
    }
    int get_edges();
    virtual void print_info();
};

