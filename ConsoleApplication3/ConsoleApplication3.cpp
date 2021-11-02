#include <stdio.h>;
#include <math.h>;

int main()
{
	int vstup, a, b, c;
	printf("vyber si:\n");
	printf("1)trojuhelnik\n");
	printf("2)obdelnik\n");
	printf("3)kruznice\n");
	scanf ("%d", &vstup);
	if (vstup == 1) {
		//trojuhelnik
		printf("zadej stranu a:\n");
		scanf(" %d", &a);
		printf("zadej stranu b:\n");
		scanf(" %d", &b);
		printf("zadej stranu c:\n");
		scanf (" %d", &c);
		if (a + b > c && b + c > a && c + a > b) {
			printf("obvod je: %d\n", a + b + c);
			float o = (a + b + c);
			printf("obsah je: %f\n", sqrt(o/2 * (o/2 - a) * (o/2 - b) * (o/2 - c)));
			if (a * a == (b * b + c * c) ^ b * b == (a * a + c * c) ^ c * c == (b * b + a * a)) {
				printf("trojuhelnik je pravouhly\n");
			}
			else {
				printf("trojuhelnik neni pravouhly\n");
			}
		}
		else {
			printf("trojuhelnik neexistuje");
		}
	}
	else if (vstup == 2) {
		//obdelnik
		printf("zadej stranu a:\n");
		scanf ("%d", &a);
		printf("zadej stranu b:\n");
		scanf ("%d", &b);
		if (a == b) {
			printf("neni to obdelnik");
		}
		else {
			printf("obsah je %d\n", a * b);
			printf("obvod je %d\n", 2 * a + 2 * b);
		}
	}
	else {
		printf("zadej polomer:\n");
		//kruznice
		scanf ("%d", &a);
		printf("obvod je: %f\n", 3.14159 * 2 * a);
		printf("obsah je: %f\n", 3.14159 * a * a);
	}
}