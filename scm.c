#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void subtrai(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

int main() {
    // Alteração para mostrar data e hora no printf do programa
	int hours, minutes, seconds, day, month, year;
	time_t agora;	
	time(&agora);
	struct tm *local = localtime(&agora);
	
	hours = local->tm_hour;
    minutes = local->tm_min;
    seconds = local->tm_sec; 
    day = local->tm_mday;
    month = local->tm_mon + 1;
    year = local->tm_year + 1900;
    
    printf("Olá, Estudante!\nSao %02d:%02d:%02d do dia %02d/%02d/%d.\n", hours, minutes, seconds, day, month, year);
    soma(5, 3);
    multiplica(5, 3);
    subtrai(5, 3);
    return 0;
}
