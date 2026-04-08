#include <stdio.h>
int main() {
   char ch;
    printf("enter the digit:\n");
    scanf("%c",&ch);
    int result=ch>='0' && ch<='9';
    printf("the %c is a digit is:%d;ch,result");
}