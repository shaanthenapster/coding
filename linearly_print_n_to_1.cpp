#include <iostream>

// Function declaration
void printname(int n);

int main()
{
    int n;
    std::cin >> n;
    printname(n);
    return 0;
}

// Function definition
void printname(int n)
{
    static int c = 5; // Use static to maintain state across function calls

    if (c <= 0)
        return;
    std::cout << c;
    c--;
    printname(n);
}