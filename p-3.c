#include <stdio.h>
 int main()
 {
    float a,b,c,x1,x2,d;
    printf("输入方程的三个系数:");
    scanf("%f %f %f",&a,&b,&c);
    if(a!=0){
    d = sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("方程解为x1=%f,x2=%f",x1,x2);

}
return 0;
 }








 //ax2+bx+c=0 