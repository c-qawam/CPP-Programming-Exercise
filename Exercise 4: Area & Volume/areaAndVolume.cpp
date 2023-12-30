#include "areaAndVolume.h"


int area(int length, int width)
{
    return length * width;
}


int perimeter(int length, int width)
{
    return 2 * (length + width);
}


int volume(int length, int width, int height)
{
    return length * width * height;
}


int surfaceArea(int length, int width, int height)
{
    return 2 * ((length * width) + (length * height) + (width * height));
}


