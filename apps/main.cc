#include <iostream>
#include "utils.h"

using namespace std;

int main() {
    tmplt::ExampleClass<std::string> myClass;
    cout << myClass.GetMsg();
}