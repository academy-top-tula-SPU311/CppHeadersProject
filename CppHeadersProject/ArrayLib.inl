#include <iostream>

template <typename T>
T* ArrayCreate(int size)
{
    return new T[size];
}

template <typename T>
void ArrayInit(T* array, int size, int begin, int end)
{
    for (int i{}; i < size; i++)
        array[i] = begin + rand() % (end - begin + 1);
}

template <typename T>
void ArrayPrint(T* array, int size)
{
    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

