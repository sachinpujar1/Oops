#include <iostream>
using namespace std;

int main()
    {
    string str;
    int vowels = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {

    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
    }

    cout << "Number of vowels in the string: " << vowels << endl;

    return 0;
}
