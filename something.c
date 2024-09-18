#include <stdio.h>
#include <stdint.h>

int main()
{
	int32_t a = 0;
	int32_t b = 0;
	int32_t s = 0;

	scanf("%d%d", &a, &b);
	s = a + b;
	printf("%d", s);
}