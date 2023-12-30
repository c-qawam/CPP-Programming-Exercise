#include <iostream>
#include <cassert>

using namespace std;

bool isEven(int number);
bool isOdd(int number);

int main()
{

    //test cases
    assert(isOdd(42) == false);
    assert(isOdd(9999) == true);
    assert(isOdd(-10) == false);
    assert(isOdd(-11) == true);
    //assert(isOdd(3.1415) == false);
    assert(isEven(4.1415) == true);
    assert(isEven(42) == true);
    assert(isEven(9999) == false);
    assert(isEven(-10) == true);
    assert(isEven(-11) == false);
    assert(isEven(3.1415) == false);

    return 0;
}

bool isEven(int number)
{
    return (number % 2 == 0);
}

bool isOdd(int number)
{
    return (number % 2 != 0);
}
