#include<stdio.h>

int i;
int j = 11;

extern int v;

int main()
{
    printf("VAlue of i :%d\n",i);
    printf("VAlue of i :%d\n",j);
    printf("VAlue of i :%d\n",v);

    return 0;
}
