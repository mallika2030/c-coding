#include <stdio.h>
int main() {
   char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    int uc=(ch>='A') && (ch<='Z');
    int lc=(ch>='a') && (ch<='z');
    int result=uc||lc;
    printf("the %c is an alphabet is:%d;ch,result");
}