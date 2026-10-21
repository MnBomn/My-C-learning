#include<stdio.h>
//题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

//程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。
int main()
{
    int a;
    int count=0;
    scanf("%d",&a);
    int i,j,k;
    //printf("\n");
    for(i=a;i<=a+3;i++){
        for(j=a;j<=a+3;j++){
            for(k=a;k<=a+3;k++){
                if(i!=k&&i!=j&&k!=j){
                    printf("%d%d%d",i,j,k);
                    count++;
                    if(count%6!=0){
                        printf(" ");
                    }
                   else if(count%6==0 && count!=0){
        printf("\n");
    }
                }
            }
        }
    }
    
}
//这题的关键是for循环的嵌套与逻辑符号的运用，三个for循环使得程序能够从将4个数从1试到4，逻辑符号确保它无重复数字。
//变：给一个数，考虑从此数开始的连续4个数字组成的不重复三位数。每行6个整数。