#include <iostream>

class IntListElement
{
public:
    IntListElement(int value) : next(NULL), data(value) {}
    ~IntListElement() {}

private:
    IntListElement *next;
    int data;
};