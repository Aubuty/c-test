#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *array[3];
    array[0]=&a;
    array[1]=&b;
    array[2]=&c;
    for(int i = 0 ; i<3 ; i++){
        printf("%d ",*array[i]);
    }
}
