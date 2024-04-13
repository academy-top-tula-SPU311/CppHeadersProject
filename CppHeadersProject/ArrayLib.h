#pragma once

template <typename T>
T* ArrayCreate(int size);

template <typename T>
void ArrayInit(T* array, int size, int begin = 0, int end = 99);

template <typename T>
void ArrayPrint(T* array, int size);


#include "ArrayLib.inl"
