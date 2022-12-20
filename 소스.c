#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, a, Panswer, Canswer, count = 0, i = 1;
	double k;
	double c;

	while (i < 10) {
		num1 = rand() % 100 + 1;
		num2 = rand() % num1 + 1;
		a = rand() % 4;

		if (a == 0) {
			printf("[%d/10] %d + %d = ", i, num1, num2);
			scanf_s("%d", &Panswer);
			Canswer = num1 + num2;
			if (Panswer == Canswer) {
				i++;
				printf("정답입니다.\n");
			}
			else printf("오답입니다. 정답은 %d입니다.\n", Canswer);
		}
		else if (a == 1) {
			printf("[%d/10] %d - %d = ", i, num1, num2);
			scanf_s("%d", &Panswer);
			Canswer = num1 - num2;
			if (Panswer == Canswer) {
				i++;
				printf("정답입니다.\n");
			}
			else printf("오답입니다. 정답은 %d입니다.\n", Canswer);
		}
		
	}
}