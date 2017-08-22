
#include "SomeClass.h"

#include <iostream>


SomeClass::SomeClass(std::string info) {

    info_ = info;

}

void SomeClass::seeInfo() {

    std::cout << info_ << std::endl;

}
