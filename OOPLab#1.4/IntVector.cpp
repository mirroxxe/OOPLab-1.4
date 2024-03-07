#include "IntVector.h"
#include <iostream>

IntVector::IntVector(int initialSize) : size(initialSize) {
    data = new int[size];
    Init();
}

IntVector::~IntVector() {
    delete[] data;
}

void IntVector::Init() {
    for (int i = 0; i < size; ++i) {
        data[i] = 0;
    }
}

void IntVector::Read() {
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> data[i];
    }
}

void IntVector::Display() const {
    std::cout << "Vector: ";
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

void IntVector::Add(const IntVector& other) {
    for (int i = 0; i < size; ++i) {
        data[i] += other.data[i];
    }
}

void IntVector::Subtract(const IntVector& other) {
    for (int i = 0; i < size; ++i) {
        data[i] -= other.data[i];
    }
}

void IntVector::Multiply(int scalar) {
    for (int i = 0; i < size; ++i) {
        data[i] *= scalar;
    }
}

void IntVector::Divide(int scalar) {
    if (scalar != 0) {
        for (int i = 0; i < size; ++i) {
            data[i] /= scalar;
        }
    }
    else {
        std::cout << "Error: Division by zero." << std::endl;
    }
}

int IntVector::GetSize() const {
    return size;
}

int& IntVector::operator[](int index) {
    return data[index];
}