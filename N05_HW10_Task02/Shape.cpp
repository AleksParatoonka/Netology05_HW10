#include "Shape.h"
#include <iostream>

int Shape::get_edges() { return edges; }

void Shape::print_info() {
    std::cout << name << std::endl;
    
    //std::cout << "� ������ " << edges << " ������" << std::endl;
}