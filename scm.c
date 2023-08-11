#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

int main() {
    char nome[20];
    printf("Digite seu nome:\n"); //Programa pede o nome do usuário
    scanf("%s", nome);
	printf("Olá, %s!\n", nome);
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}
