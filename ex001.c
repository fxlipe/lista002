#include <stdio.h>

void main() {
            int x;
            printf("Digite um número: ");
            scanf("%d", &x);
            if (x % 2 == 0) {
                printf("\to numero %d é par\n", x);
            }
            if (x % 2 != 0) {
                printf("\to numero %d é impar\n", x);
            }
        }
       


