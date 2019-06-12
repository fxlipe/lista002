#include <stdio.h>
void main(){
    float x,y;
    printf("Digite o valor de X 1/2: ");
    scanf("%f",&x);
    printf("Digite o valor de Y 2/2: ");
    scanf("%f",&y);
    if(x>0 && y>0){
        printf("Esse ponto pertence ao primeiro quadrante \n");
    }
    if(x<0 && y>0){
        printf("Esse ponto pertence ao segundo quadrante \n");
    }
    if(x<0 && y<0){
        printf("Esse ponto pertence ao terceiro quadrante \n");
    }
    if(x>0 && y<0){
        printf("Esse ponto pertence ao quarto quadrante \n");
    }
}