#include <iostream>
#include "Triangle.h"

int Menu();
int GetNumber(int, int);
void ExitBack();
void Show(Triangle* [], int);
void Move(Triangle* [], int);
void FindMax(Triangle* [], int);
void IsIncluded(Triangle* [], int);

int Triangle::count = 0;

int main()
{
// points definition
    point p1(0, 0);    point p2(0.5, 1);
    point p3(0, 0);    point p4(0.5, 1);
    point p5(0, 0);    point p6(0.5, 1);
    point p7(0, 0);    point p8(0.5, 1);

// triangle definition
    Triangle triaA(p1, p2, p3, "triaA");
    Triangle triaB(p1, p4, p8, "triaB");
    Triangle triaC(p1, p5, p6, "triaC");
    Triangle triaD(p1, p7, p8, "triaD");

// pointers to triangles array definition
    Triangle* pTria[] = { &triaA, &triaB, &triaC, &triaD };
    int n = sizeof (pTria) / sizeof (pTria[0]);

// Main cycle
    bool done = false;
    while (!done)
    {
        switch (Menu()) {
        case 1: Show(pTria, n);           break;
        case 2: Move(pTria, n);           break;
        case 3: FindMax(pTria, n);        break;
        case 4: IsIncluded(pTria, n);     break;
        case 5: std::cout << "Work is done." << std::endl;
                done = true;    break;
        }
    }
    return 0;
}

int Menu()
{
    std::cout << "\n=============== Main menu ===============" << std::endl;
    std::cout << "1 - list all objects\t 3 - find max" << std::endl;
    std::cout << "2 - move\t\t 4 - define the inclusion relation" << std::endl;
    std::cout << "\t\t    5 - exit" << std::endl;

    return GetNumber(1, 5);
}

// ------ input whole number in range
int GetNumber(int min, int max)
{
    int number = min - 1;
    while (true) {
        std::cin >> number;
        if ((number >= min) && (number <= max) && std::cin.peek() == '\n')
            break;
        else {
            std::cout << "Enter input again (expects number from " << min
                      << " to " << max << "):" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n'){}
        }
    }
    return number;
}

// ----- return to main function
void ExitBack()
{
    std::cout << "press Enter." << std::endl;
    std::cin.get(); std::cin.get();
}

// ------- list all triangles
void Show(Triangle* p_tria[], int k)
{
    std::cout << "====== Triangles list ======" << std::endl;
    for (int i = 0; i < k; ++i)
        p_tria[i]->Show();
    for (int i = 0; i < k; ++i)
        p_tria[i]->ShowSideAndArea();
    ExitBack();
}

// ----------- moving

void Move(Triangle* p_tria[], int k)
{
    std::cout << "======= Move =======" << std::endl;
    // there will be code
    ExitBack();
}

// --------- find max triangle
void FindMax(Triangle* p_tria[], int k)
{
    std::cout << "=== find max triangle ===" << std::endl;
    // there will be code
    ExitBack();
}
// --------- inclusion relation
void IsIncluded(Triangle* p_tria[], int k)
{
    std::cout << "===== Inclusion relation" << std::endl;
    // there will be code
    ExitBack();
}
