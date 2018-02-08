#include <stdio.h>
int main()
{
    int m,i;
    unsigned long long factorial=1;
    printf("Enter an integer: ");
    scanf("%d",&m);
    if (n < 0)
        printf("negative does not exist");

    else
    {
        for(i=1; i<=m; ++i)
        {
            factorial *= i;         
        }
        printf("Factorial of %d= %llu", m, factorial);
    }
}
