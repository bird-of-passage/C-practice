#include<stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    for(i=0; i<5; i++){
        printf("%u\n",&a[i]);
    }
    printf("Address of a: %u\n",a);

    return 0;
}
