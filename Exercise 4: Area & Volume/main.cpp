#include <cassert>
#include "areaAndVolume.h"

int main()
{
    assert(area(10, 10) == 100);
    assert(area(0, 9999) == 0);
    assert(area(5, 8) == 40);
    assert(perimeter(10, 10) == 40);
    assert(perimeter(0, 9999) == 19998);
    assert(perimeter(5, 8) == 26);
    assert(volume(10, 10, 10) == 1000);
    assert(volume(9999, 0, 9999) == 0);
    assert(volume(5, 8, 10) == 400);
    assert(surfaceArea(10, 10, 10) == 600);
    assert(surfaceArea(9999, 0, 9999) == 199960002);
    assert(surfaceArea(5, 8, 10) == 340);

    return 0;
}
