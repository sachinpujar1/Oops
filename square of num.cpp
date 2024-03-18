#include <iostream>
using namespace std;

// Function to calculate the square of a number
int square(int num) {
    cout<< "enter the number";
    cin>> num;
    return num *num;
}

int main() {
    int result = square(5);
    cout << "Square: " <<result << endl;
    return 0;
}
