#include <stdio.h>
void fact();
int main(){

fact();

return 0;
}
void fact()
{
    int fact = 1,n;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i =1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("Factorial is %d",fact);
}