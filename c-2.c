#include <stdio.h>
int main()
{
double i;
double bonus[6];
double all_bonus;
printf("请输入当月利润：");
scanf("%lf",&i);
bonus[0]=i*0.1;
bonus[1]=(i-100000)*0.075;
bonus[2]=(i-200000)*0.05;
bonus[3]=(i-400000)*0.03;
bonus[4]=(i-600000)*0.015;
bonus[5]=(i-1000000)*0.01;
if(i<=100000){
    all_bonus=bonus[0];
}
else if(i<=200000){
    all_bonus=100000*0.1+bonus[1];
}
else if(i<=400000){
    all_bonus=100000*0.1+100000*0.075+bonus[2];
}
else if(i<=600000){
    all_bonus=100000*0.1+100000*0.075+200000*0.05+bonus[3];
}
else if(i<=1000000){
    all_bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+bonus[4];
}
else{
    all_bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+bonus[5];
}
printf("当月奖金总数为：%lf",all_bonus);//输入输出变量要打占位符，别老忘。
}
// 企业发放的奖金根据利润提成。

// 利润(I)低于或等于10万元时，奖金可提10%；0
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；1
// 20万到40万之间时，高于20万元的部分，可提成5%；2
// 40万到60万之间时高于40万元的部分，可提成3%；3
// 60万到100万之间时，高于60万元的部分，可提成1.5%；4
// 高于100万元时，超过100万元的部分按1%提成。5
// 从键盘输入当月利润I，求应发放奖金总数？

// 程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。
// #include<stdio.h>
// int main()
// {
//     double i;
//     double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
//     printf("你的净利润是：\n");
//     scanf("%lf",&i);
//     bonus1=100000*0.1;
//     bonus2=bonus1+100000*0.075;直接定义掉常数项，更方便
//     bonus4=bonus2+200000*0.05;
//     bonus6=bonus4+200000*0.03;
//     bonus10=bonus6+400000*0.015;
//     if(i<=100000) {
//         bonus=i*0.1;
//     } else if(i<=200000) {
//         bonus=bonus1+(i-100000)*0.075;
//     } else if(i<=400000) {
//         bonus=bonus2+(i-200000)*0.05;
//     } else if(i<=600000) {
//         bonus=bonus4+(i-400000)*0.03;
//     } else if(i<=1000000) {
//         bonus=bonus6+(i-600000)*0.015;
//     } else if(i>1000000) {
//         bonus=bonus10+(i-1000000)*0.01;
//     }
//     printf("提成为：bonus=%lf",bonus);
 
//     printf("\n");
// }