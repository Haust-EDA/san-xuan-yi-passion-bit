include <stdio.h>

void printPositiveTriangle() 
{
    for (int i = 1; i <= 9; i++) 
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %-2d  ", j, i, i * j);
        }
        printf("\n");
    }
}

void printInvertedTriangle()
{
    for (int i = 9; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %-2d  ", j, i, i * j);
        }
        printf("\n");
    }
}

int main()
{
    printf("正三角九九乘法表123：\n");
    printPositiveTriangle();
    printf("倒三角九九乘法表：\n");
    printInvertedTriangle();
    return 0;
}
