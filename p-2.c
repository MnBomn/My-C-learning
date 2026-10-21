#include <stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if (a%2!=0){
        printf("jishu");
    }
    else{
        printf("oushu");
    }
    return 0;
}