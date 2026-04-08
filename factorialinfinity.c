#include <stdio.h>
int main() {
    int num;
    printf("enter the number :\n");
    scanf("%d", &num);
    int fact=1;
    for (int a=num;num>=1;a--)
    {
       fact=fact*a;
       printf("hii");
    }
   printf("%d is the factorial of %d",fact,num);
    return 0;
}