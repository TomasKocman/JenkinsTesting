
#include <iostream>

#include "SomeClass.h"


int main() {

    std::cout << "Starting project ..." << std::endl;

    SomeClass* someClass { new SomeClass("String parameter") };

    someClass -> seeInfo();

    delete someClass;

    return 0;
}