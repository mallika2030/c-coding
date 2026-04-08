#include <stdio.h>

int main() {
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    int eligible=(age>=18);
    printf("eligible for voting %d\n",eligible);
    return 0;
}