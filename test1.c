/*?
 *选择结构 if else

 *
 *
 *
 * */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int source; 
    printf("input student source:"); 
    scanf("%d",&source);
    printf("\n");
    if(source >= 90){
        printf("优秀\n");
    }else if (source >= 80 && source < 90){
        printf("良好\n");
    }else if (source >= 60 && source < 80){
        printf("几个\n");
    }else{
        printf("洗洗睡吧\n");
    }

    return 0 ;
}
