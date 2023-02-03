#include <iostream>
#include "Shape.h"

#include "Triangle.h"
#include "Square_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"

#include "Poly.h"
#include "Parallelogram.h"
#include "Rect.h"
#include "Square.h"
#include "Rhombus.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    //Shape shape;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Square_Triangle square_triangle(10, 20, 30, 50, 60);
    Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_Triangle equilateral_triangle(30);

    Poly poly(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rect rectangle(10, 20);
    Square square(20);
    Rhombus rhombus(30, 30, 40);

    Triangle* par_triangle = &triangle;
    par_triangle->print_info();

    Triangle* par_square_triangle = &square_triangle;
    par_square_triangle->print_info();

    Triangle* par_isosceles_triangle = &isosceles_triangle;
    par_isosceles_triangle->print_info();

    Triangle* par_equilateral_triangle = &equilateral_triangle;
    par_equilateral_triangle->print_info();

    Poly* par_poly = &poly;
    par_poly->print_info();

    Poly* par_rectangle = &rectangle;
    par_rectangle->print_info();

    Poly* par_square = &square;
    par_square->print_info();

    Poly* par_parallelogram = &parallelogram;
    par_parallelogram->print_info();

    Poly* par_rhombus = &rhombus;
    par_rhombus->print_info();


}