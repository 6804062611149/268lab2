#include <stdio.h>

int main () {
	int n1, n2, n3, n4, max;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	(((n1 > n2) && (n1 > n3) && (n1 > n4))? max = n1:
	((n2 > n1) && (n2 > n3) && (n2 > n4))? max = n2:
	((n3 > n2) && (n3 > n1) && (n3 > n4))? max = n3:
	max = n4);
	((((n1 < max) && (n1 > n3) && (n1 > n4)) || ((n1 < max) && (n1 > n2) && (n1 > n4)) || ((n1 < max) && (n1 > n2) && (n1 > n3)))? printf("%d",n1):
	(((n2 < max) && (n2 > n3) && (n2 > n4)) || ((n2 < max) && (n2 > n1) && (n2 > n4)) || ((n2 < max) && (n2 > n1) && (n2 > n3)))? printf("%d",n2):
	(((n3 < max) && (n3 > n2) && (n3 > n4)) || ((n3 < max) && (n3 > n1) && (n3 > n4)) || ((n3 < max) && (n3 > n1) && (n3 > n2)))? printf("%d",n3):
	printf("%d",n4));
}