#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, world!" << '\n';
    cout << "What is your name? ";
    string name{};
    cin >> name;
    cout << "Hello, " << name << '\n';

    return 0;
}
