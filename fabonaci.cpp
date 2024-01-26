#include <stdio.h>
#include <string.h>
#include <vector>

int fabonaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fabonaci(n - 1);
    int slast = fabonaci(n - 2);
    return last + slast;
}

int main()
{
    int number = fabonaci(10);
    printf(" " + number);
    return 0;
}