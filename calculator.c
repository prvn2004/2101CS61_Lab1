#include <stdio.h>
int main()
{
    float a, b;
    int c;
    printf("Enter num1:");
    scanf("%f", &a);
    printf("Enter num2:");
    scanf("%f", &b);
    printf(" Select option: \n 1.Add    2.Substract    3.Multiply    4.Divide \n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("%.2f", (a + b));
        break;
            case 2:
        printf("%.2f", (a - b));
        break;
            case 3:
        printf("%.2f", (a * b));
        break;
    
    return 0;
}
