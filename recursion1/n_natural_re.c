#include <stdio.h>
void naturalNum(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        naturalNum(n - 1);
        
    }
}
int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
    naturalNum(n);
    return 0;
}