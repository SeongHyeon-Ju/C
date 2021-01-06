/*#1.Hemisphere*/
/*#include <stdio.h>
#include <math.h>
int main() {
	double r,x,y,z;
	r = 1.0;
	for (y = -r; y <= r; y = y + 0.01) {
		printf("\t%6.2f", y);
	}	//printf y-axis
	for (x = -r; x <= r; x = x + 0.01) {
		printf("\n%.2f\t", x);	//printf x-axis
		for (y = -r; y <= r; y = y + 0.01) {
			if ((x*x + y*y) >= r*r) {
				z = 0;
			}
			else {
				z = sqrt(r*r - x*x - y*y);
			}
			printf("%6f\t", z);
		}
	}
	return 0;
}*/

/*#2.Circular cone*/
/*#include <stdio.h>
#include <math.h>
int main() {
	double r, h, x, y, z;
	r = 1.0;
	h = 3.0;
	for (y = -r; y <= r; y = y + 0.01) {
		printf("\t%6.2f", y);
	}	//printf y-axis
	for (x = -r; x <= r; x = x + 0.01) {
		printf("\n%.2f\t", x);	//printf x-axis
		for (y = -r; y <= r; y = y + 0.01) {
			if ((x*x + y*y) >= r*r) {
				z = 0;
			}
			else {
				z = h*(r - sqrt(x*x + y*y)) / r;
			}
			printf("%6f\t", z);
		}
	}
	return 0;
}*/

/*#3.Triangular Pyramid*/
/*#include <stdio.h>
#include <math.h>
int main() {
	double x, y, z;
		for (y = -1; y <= 1; y = y + 0.01) {
		printf("\t%6.2f", y);
		}	//printf y-axis
		for (x = 0; x <= sqrt(3); x = x + 0.01) {
			printf("\n%.2f\t", x);	//printf x-axis
				for (y = -1; y <= 1; y = y + 0.01) {
					if (y>=0 && y <= -1 * sqrt(3)*x + 1) {
						z = (2 * (1 - y)) - ((2 * x) / sqrt(3));
					}
					else if (y < 0 && y >= x / sqrt(3) - 1) {
						z = (2 * (1 + y)) - ((2 * x) / sqrt(3));
					}
					else{
					z = 0;
					}
	printf("%6f\t", z);
	}
	}
	return 0;
	}
*/