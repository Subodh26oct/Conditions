#include <iostream>
using namespace std;
int main()
{
    char ch1, ch2;
    cout << "Enter the 1st character :";
    cin >> ch1;
    cout << "Enter the 2nd character :";
    cin >> ch2;
    int ch = (int)ch1 - (int)ch2;
    if (ch > 0)
    {
        cout << ch;
    }
    else
        cout << -(ch);
}