#include "point.h"
#include <iostream>

point::point(double _x, double _y)
    : x(_x),
      y(_y)
{
}

void point::show() const
{
    std::cout << "  (" <<  x << ". " << y << " )" << std::endl;
}
