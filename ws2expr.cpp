#include <stdio.h>
#include <math.h>
int main () {
	float a,b,c,d;
	a=1, b=1, c=5, d=1;
	printf("products of 4.1:\n");
	float a1 = (3*(a/5)+(1/b)), a2 = (((3*a)+(5*b))/(2+c)), a3 = (2.0/7.0) * (pow(4, 3+c) - (5*d)), a4 = sqrt((2 + 8*b) / a), a5 = cbrt(pow(b, 2) - 4*d);
	printf("A = %.4f\n",a1),printf("B = %.2f\n",a2),printf("C = %.2f\n",a3),printf("D = %.2f\n",a4),printf("E = %.2f\n",a5);
	printf("products of 4.2:\n");
	a=9, b=2, c=0, d=1;
	a1 = (3*(a/5)+(1/b)), a2 = (((3*a)+(5*b))/(2+c)), a3 = (2.0/7.0) * (pow(4, 3+c) - (5*d)), a4 = sqrt((2 + 8*b) / a), a5 = cbrt(pow(b, 2) - 4*d);
	printf("A = %.4f\n",a1),printf("B = %.2f\n",a2),printf("C = %.2f\n",a3),printf("D = %.2f\n",a4),printf("E = %.2f\n",a5);
	printf("products of 4.3:\n");
	a=0, b=3, c=3, d=3;
	a1 = (3*(a/5)+(1/b)), a2 = (((3*a)+(5*b))/(2+c)), a3 = (2.0/7.0) * (pow(4, 3+c) - (5*d)), a4 = sqrt((2 + 8*b) / a), a5 = cbrt(pow(b, 2) - 4*d);
	printf("A = %.4f\n",a1),printf("B = %.2f\n",a2),printf("C = %.2f\n",a3),printf("D = %.2f\n",a4),printf("E = %.2f\n",a5);
}
