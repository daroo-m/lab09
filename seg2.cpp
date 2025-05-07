#include <iostream>

class IntArray {
private:
    int *data;
    int size;
public:
    IntArray(int size) : size(size) {
        int *data = new int[size];    
    }
    
    void fill(int val) {
        for (int i = 0; i < size; ++i) {
            data[i] = val;    
        }
    }

    ~IntArray() {
        delete[] data;    
    }
};

int main() {
    IntArray arr(10);
    arr.fill(5);
    
    std::cout << "Program done!" << std::endl;
    return 0;
}