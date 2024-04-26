#include <iostream>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int *ptr = arr;

    int *ptrToFourthElement = ptr + 3;

    std::cout << "The 4th element of the array: " << *ptrToFourthElement << std::endl;

    return 0;
}