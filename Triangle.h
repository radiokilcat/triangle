#pragma once

#include "point.h"

class Triangle
{
public:
    Triangle(point, point, point, const char*);
    Triangle(const char*);
    ~Triangle();
    point Get_v1() const { return v1; }
    point Get_v2() const { return v1; }
    point Get_v3() const { return v1; }
    char* GetName() const { return name; }
    void Show() const;
    void ShowSideAndArea() const;
public:
    static int count;
private:
    char* objID;
    char* name;
    point v1, v2, v3;
    double a;
    double b;
    double c;
};
