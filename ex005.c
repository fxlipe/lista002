#include <stdio.h>
void main(){
    int i=1,soma,j=1;

    while(j < 10){
        printf("==============================================\n");
        while(i<=10){
            soma= j*i;
            
            printf("%d x %d = %d\n",j,i,soma);
            
            i++;
        }
        printf("==============================================\n");
        i=1;
        j++;
    }
}