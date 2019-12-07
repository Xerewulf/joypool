
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



void timemachine(int number) {
	int hour, day, min;

	min = number % 60;
	hour = number / 60;
	day = hour / 24;
	hour = hour % 24;
	printf("%d %d %d\n", day, hour, min);

}

int main() {

	int hour, day, number, min;
	printf("sayý giriniz:");
	scanf_s("%d", &number);
	while (number != -1) {
		timemachine(number);
		printf("sayý giriniz:");
		scanf_s("%d", &number);

	}

	return 0;