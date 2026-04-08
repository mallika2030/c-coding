#include <stdio.h>

int main() {
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);
    int count=0;
    for (int a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is prime number \n",num);
    }
    else
    {
        printf("%d is not a prime number \n",num);
    }
    return 0;
}