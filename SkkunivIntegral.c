#include <stdio.h>
int main() {
	double x1, y1, x2, y2, sum;
	sum = 0;
	for (;;) {
		scanf_s("%lf %lf", &x1, &y1);
		scanf_s("%lf %lf", &x2, &y2);
		sum += 0.5*(x2 - x1)*(y1 + y2);
		if (x1 == -1) {
			break;
		}
	}
	printf("The area of SKK University=%f", sum);
	return 0;
}