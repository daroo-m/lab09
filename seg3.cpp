#include <iostream>

class IntPointer {
private:
    int *ptr;
public:
    IntPointer() : ptr(NULL) {}
    
    void setAddress(int *addr) { ptr = addr; }
    void setValue(int val) { *ptr = val; }
    int getValue() { return *ptr; }
};


int main() {
    IntPointer iptr;
    iptr.setValue(5);
    std::cout << "Value is " << iptr.getValue() << std::endl;

    return 0;
}