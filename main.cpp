#include <iostream>

using namespace std;

int swapEvenAndOddBits(int n) {
    uint64_t evenMask = 0xAAAAAAAAAAAAAAAA;
    uint64_t oddMask = 0x5555555555555555;
    uint64_t even = n & evenMask;
    uint64_t odd = n & oddMask;
    even >>= 1;
    odd <<= 1;
    return (even|odd);
}

int main() {
    int n = -2;
    int result = swapEvenAndOddBits(n);
    cout << result;
    return 0;
}