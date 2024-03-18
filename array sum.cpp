#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
        {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    cout << "Sum of elements in the array: " << sum << endl;

    return 0;
}
