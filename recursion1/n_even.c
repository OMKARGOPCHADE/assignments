#include <stdio.h>
void print(int n)
{
    if (n > 0)
    {
        print(n - 1);
        printf("%d ", 2*n);
    }
}
int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
    print(n);
    return 0;
}