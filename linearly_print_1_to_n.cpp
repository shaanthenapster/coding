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
    static int c = 1; // Use static to maintain state across function calls

    if (c <= n)
    {
        std::cout << c;
        c++;
        printname(n);
    }
}