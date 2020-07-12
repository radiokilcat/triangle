#include "Triangle.h"
#include <cstring>
#include <math.h>
#include <iomanip>
#include <iostream>

Triangle::Triangle(point _v1, point _v2, point _v3, const char* id)
    : v1(_v1),
      v2(_v2),
      v3(_v3)
{
    char buf[32];

    objID = new char[strlen(id) + 1];
    strcpy(objID, id);

    count++;
    sprintf(buf, "Треугольник %d", count);
    name = new char[strlen(buf) + 1];
    strcpy(name, buf);
    a = sqrt((v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y));
    b = sqrt((v2.x - v3.x) * (v2.x - v3.x) + (v2.y - v3.y) * (v2.y - v3.y));
    c = sqrt((v1.x - v3.x) * (v1.x - v3.x) + (v1.y - v3.y) * (v1.y - v3.y));
    std::cout << "Constructor_1 for: " << objID
              << " (" << name << ")" << std::endl;
}

Triangle::Triangle(const char* ident)
{
    char buf[32];
    objID = new char[strlen(ident) + 1];
    strcpy(objID, ident);

    count ++;
    sprintf(buf, "Треугольник %d", count);
    name = new char[strlen(buf) + 1];
    strcpy(name, buf);
    a = b = c = 0;
    std::cout << "Constructor_2 for: " << objID
         << " (" << name << ")" << std::endl;
}

Triangle::~Triangle()
{
    std::cout << "Destructor for: " << objID << std::endl;
    delete [] objID;
    delete [] name;
}

void Triangle::Show() const
{
   std::cout << name << ":";
   v1.show(); v2.show(); v3.show();
   std::cout << std::endl;
}

void Triangle::ShowSideAndArea() const
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "__________________________________" << std::endl;
    std::cout << name << ":";
    std::cout.precision(4);
    std::cout << " a= " << std::setw(5) << a;
    std::cout << " b= " << std::setw(5) << b;
    std::cout << " c= " << std::setw(5) << c;
    std::cout << ":\ts= " << s << a;
}
























