#include <stdio.h>
int main() {

int numero, i;

printf("Digite um número para mostrar à sua tabuada \n");
scanf("%d \n", &numero);
for (i = 0; i <= 10; i++) {
printf("%d x %d = %d \n", i, numero, i * numero);
}


}