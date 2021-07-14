//数组的使用
#include <stdio.h>
#include <stdlib.h>
void sizearray(int array[]){
}
int main()
{
    int dataarray[100];//声明数组空间 未初始化
    int data[3] = {1,2,3}; //完整初始化
    int array[123]={1,2,3,4,5,6,7};//未完全初始化
    for(int i = 0 ; i<100;i++){
        printf("%d+%d=%d\n",i,i+1,i+(i+1));
    }
  printf("数组的元素个数为:%ld\n",sizeof(dataarray)/sizeof(dataarray[0]));
    return 0;
}
