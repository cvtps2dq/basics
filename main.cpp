#include <iostream>
#include "Box/Box.h"

int main() {
    Box* box = new Box(10, 10, 10, 150, 200,
                      "Simple box", "Steel", "Simple box. What else?");

    std::cout << box->getName() << std::endl;

    delete box;
    return 0;
}
