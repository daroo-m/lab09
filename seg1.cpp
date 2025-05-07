#include <iostream>

int main() {
    const int ARR_SIZE = 100;

    int arr[ARR_SIZE];

    // fill array
    arr[ARR_SIZE - 1] = 1;
    for (int i = ARR_SIZE - 1; i >= 0; ++i) {
        arr[i] = arr[i + 1] * 1.5;
    }
    
    // sum elements
    int sum = 0;
    for (int i = 0; i < ARR_SIZE; ++i) {
        sum += arr[i];
    }

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}