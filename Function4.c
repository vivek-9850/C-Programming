#include<stdio.h>

int Addition(int No1, int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;
}

int Substraction(int data1, int data2)
{
    int Result = 0;
    Result = data1 - data2;
    return Result;
}

int Multiplication(int a, int b)
{
    int Mul = 0;
    Mul = a * b;
    return Mul;
}

int main()
{
    int value1 = 10;
    int value2 = 11;
    int Ans = 0;

    Ans = Addition(value1,value2);
    printf("Addition is : %d\n",Ans);

    Ans = Substraction(value1,value2);
    printf("Substraction is : %d\n",Ans);

    Ans = Multiplication(value1,value2);
    printf("Multiplication is : %d\n",Ans);

    return 0;
}
