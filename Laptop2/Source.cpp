#include "Laptop.h"

int main()
{
    Laptop myLaptop("Intel i5", 8, 3.5,
        32, "DDR4",
        256, "SSD",
        "NVIDIA GTX 1050", 6,
        15.6, "1920x1080");

    cout << "Laptop Specifications:" << endl;
    myLaptop.showSpecifications();

    return 0;
}