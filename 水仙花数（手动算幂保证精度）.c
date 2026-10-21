#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
int begin = 1;
for (int j = 0;j<n-1;j++){
    begin*=10;
}
int end=1;
for (int k = 0;k<n;k++){
    end*=10;
}
for (int i = begin;i<end;i++){
    int t=i;
    int sum=0;
    while(t>0){
        int a = t%10;
        int power=1;//手动计算a的n次方，防止因为浮动导致数据丢失
        for(int s=0;s<n;s++){
            power *= a;
        }
        sum += power;
        t/=10;
    }
    if(sum==i){
        printf("%d\n",i);
    }
}
return 0;
}