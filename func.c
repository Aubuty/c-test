#include <stdio.h>
#include <stdlib.h> 
int add(int data1,int data2)
{
    return data1+data2;
}
int jianfa(int data1,int data2)
{
    return data1-data2;
}
float chufa(int data1,int data2)
{
    return data1/data2; 
}
int chengfa(int data1, int data2)
{
    return data1*data2;
}
int main()
{
    int a=10,b=10; 
    printf("%d+%d=%d\n",a,b,add(a,b));
    printf("%d-%d=%d\n",a,b,jianfa(a,b));
    printf("%d*%d=%d\n",a,b,chengfa(a,b));
    printf("%d/%d=%f\n",a,b,chufa(a,b));
    return 0;
}
