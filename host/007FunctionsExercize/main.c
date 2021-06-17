#include "math.h"
#include <stdio.h>


int main(void) {
	printf("Add: %X\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Mul: %llx\n", math_mul(0x0FFF1111, 0x0FFF1111));
	return 0;
}
