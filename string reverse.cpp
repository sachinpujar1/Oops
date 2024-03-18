#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = length ; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}
