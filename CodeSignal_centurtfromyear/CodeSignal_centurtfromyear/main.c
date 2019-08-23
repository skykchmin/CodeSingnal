#include <stdio.h>

int centuryFromYear(int year) {
	int result = 0;
	result = ((year - 1) / 100) + 1;
	printf("%d", result);

	return 0;
}

int main(void) {

	int year = 0;
	scanf_s("%d", &year);
	centuryFromYear(year);

	system("pause");
	return 0;
}