#include <string>

// This code is to use as an example to show what memory leaks look like in Valgrind (doesn't actually do anything meaningful)

class Leak {
public:
    Leak(int x, int y, int z) {
        tensor = new Data**[x];
        for (int i = 0; i < x; ++i) {
            tensor[i] = new Data*[y];
            for (int j = 0; j < y; ++j) {
                tensor[i][j] = new Data[z];    
            }   
        }
    }
    
private:
    struct Data {
        int x;
        std::string s;
        float f;
        void *ptr;
    };

    Data ***tensor;  
};

int main() {
    Leak l(15, 10, 4); 
    return 0;    
}
