#include <iostream>

//Call function std::cout
void print()
{
    //Call operator << for object with type std::cout
    std::cout << "Hello Skillbox\n";
}

int print10()
{
    std::cout << "10\n";
    return 10;
}


int main()
{
    print();
    print();
    print();

    std::cout << print10();

    return 0;
}

