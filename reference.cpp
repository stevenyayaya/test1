#include <iostream>
using namespace std;

int main()
{
    string food = "pizza";
    string *ptr = &food;

    cout << food << "\n";
    cout << &food << "\n";

    cout << *ptr << "\n";

    *ptr = "Hamburger";
    cout << *ptr << "\n";
    cout << food << "\n";
}