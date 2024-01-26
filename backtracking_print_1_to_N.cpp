#include <iostream>

void printSequence(int n, int m);

int main()
{
    int n;
    std::cin >> n;
    printSequence(n, n);
    return 0;
}

void printSequence(int n, int m)
{

    if (n < 1)
        return;
    // The concept of moving forward using a decrement counter is basically what we are reffering to as backtracking.
    printSequence(n - 1, m);
    std::cout << n;
}