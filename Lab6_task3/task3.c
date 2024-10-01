#include <stdio.h>
#include <locale.h>
int main(void) {

	setlocale(LC_ALL, "RUS");
	int birthday;
	printf("¬ведите ваш год рождени€\n");
	scanf_s("%d", &birthday);
	printf("%d лет", 2024 - birthday);



}