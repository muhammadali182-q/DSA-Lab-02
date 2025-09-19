#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Pointer Address: " << ptr << endl;
    cout << "Value at Address: " << *ptr << endl;
}

int main() {
    // Part 2a: Stack allocation
    int iValue = 42;
    cout << "Stack Variable:" << endl;
    analyze_pointer(&iValue);

    // Part 2b: Heap allocation
    int* heapValue = new int;
    *heapValue = 99;
    cout << "\nHeap Variable:" << endl;
    analyze_pointer(heapValue);

    delete heapValue; // free memory
    return 0;
}
