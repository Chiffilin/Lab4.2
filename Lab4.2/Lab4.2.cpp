#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string a;
    cout << "Введите строку: ";
    getline(cin, a);
    string b;
    b += a[0];
    for (int i = 1; i < a.length(); i++)
    {
        if ((a[i] != ' ') || ((a[i] == ' ') and (a[i - 1] != ' '))) b += a[i];
    }
    cout << "  " << endl;
        cout << b;


    return 0;
}