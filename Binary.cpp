#include <iostream>
using namespace std;

// Convert decimal to binary
int decToBinary(int d) {
    int ans = 0, pow = 1;
    while(d > 0) {
        int remender = d % 2;
        d /= 2;
        ans += (remender * pow);
        pow *= 10; 
    }
    return ans;
}

// Convert binary to decimal
int binaryToDec(int binNum) {
    int ans = 0, pow = 1;
    while(binNum > 0) {
        int remender = binNum % 10;
        ans += (remender * pow);
         binNum /= 10;
        pow *= 2; 
    }
    return ans;
}

int main() {
    for(int i = 2; i <= 10; i++) {
        cout << "Decimal to binary "<< i << " " << decToBinary(i) << endl; 
    }

    cout << "Binary to decimal num is 110010 cinvert in decimal: - " << binaryToDec(110010101) << endl; 
}