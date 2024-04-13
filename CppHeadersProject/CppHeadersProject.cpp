#include <iostream>
#include "ArrayLib.h"

//#define PI 3.14
//#define SUM(a, b) a + b
//#define MULT(a, b) (a) * (b)

#define WIN

#ifdef LINUX
int a = 100;
#else
int a = 200;
#endif



int main()
{
    srand(time(nullptr));

    const float pi = 3.14;

    int size{ 10 };
    int* array = ArrayCreate<int>(size);
    ArrayInit(array, size);
    ArrayPrint(array, size);

    float s = 5.5 * PI;
    float s2 = 5.5 * pi;
    
    int a{ 10 };
    int b{ 20 };

    std::cout << MULT(a + 30, b + 40 ) << "\n";
}


