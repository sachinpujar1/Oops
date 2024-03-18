#include <iostream>

using namespace std;

int main() {
    int num, factorial = 1;

    cout << "Enter the number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined " << endl;
    }
     else
     {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is " << factorial << endl;
    }

    return 0;
}
