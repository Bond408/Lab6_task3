#include <stdio.h>
#include <locale.h>
int main(void) {

	setlocale(LC_ALL, "RUS");
	int birthday;
	printf("������� ��� ��� ��������\n");
	scanf_s("%d", &birthday);
	printf("%d ���", 2024 - birthday);



}