#include<stdio.h>
int main(){
    int summer,temp;
    printf("enter the temp :\n");
    scanf("%d",&temp);
    printf("enter 0 for not summer \n enter 1 for summer");
    scanf("%d",&summer);
    if(summer)
    {
       if(temp>=60 && temp<=100)
       {
           printf("play");
       }
       else
       {
           printf("not play");
       }
    }
    else
    {
        if(temp>=60 && temp<=90)
        {
            printf("play");
        }
        else
        {
            printf("not play");
        }
    }
return 0;
    
}