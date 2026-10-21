#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delt;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delt = b * b - 4 * a * c;
    
    // 1. 零解情况
    if (fabs(a) < 1e-6 && fabs(b) < 1e-6 && fabs(c) < 1e-6) {
        printf("Zero Equation");
    }
    // 2. 无意义情况
    else if (fabs(a) < 1e-6 && fabs(b) < 1e-6 && fabs(c) > 1e-6) {
        printf("Not An Equation");
    }
    // 3. 一元一次方程 (a=0, b!=0)
    else if (fabs(a) < 1e-6) {
        double x = -c / b;
        if (fabs(x) < 1e-6) x = 0.0; // 防 -0.00
        printf("%.2lf\n", x);
    }
    // 4. 真正的二次方程 (a!=0)
    else {
        // 4.1 两个不等实根
        if (delt > 1e-6) {
            double x1 = (-b + sqrt(delt)) / (2 * a); // 注意括号
            double x2 = (-b - sqrt(delt)) / (2 * a);
            if (x1 < x2) { // 大根在前
                double temp = x1; x1 = x2; x2 = temp;
            }
            if (fabs(x1) < 1e-6) x1 = 0.0;
            if (fabs(x2) < 1e-6) x2 = 0.0;
            printf("%.2lf\n%.2lf\n", x1, x2);
        }
        // 4.2 两个相等实根
        else if (fabs(delt) <= 1e-6) {
            double x = -b / (2 * a);
            if (fabs(x) < 1e-6) x = 0.0;
            printf("%.2lf\n", x);
        }
        // 4.3 复数根
        else {
            double real = -b / (2 * a);
            double virtual = sqrt(-delt) / (2 * a);
            
            if (fabs(real) < 1e-6) real = 0.0;
            
            // 核心：一定要用 fabs 强制把虚部转正
            printf("%.2lf+%.2lfi\n", real, fabs(virtual));
            printf("%.2lf-%.2lfi\n", real, fabs(virtual));
        }
    }
    
    return 0;
}