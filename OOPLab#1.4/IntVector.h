#ifndef INTVECTOR_H
#define INTVECTOR_H

class IntVector {
private:
    int* data;
    int size;

public:
    IntVector(int initialSize = 0);
    ~IntVector();

    void Init();
    void Read();
    void Display() const;
    void Add(const IntVector& other);
    void Subtract(const IntVector& other);
    void Multiply(int scalar);
    void Divide(int scalar);

    int GetSize() const;
    int& operator[](int index);
};

#endif 
