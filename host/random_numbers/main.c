#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


const uint8_t SIZE = 10;


float get_random_float (float min, float max) {
	return ((float) rand() / (float) RAND_MAX) * (max - min) + min;
}


float *get_array_floats(float *arr, float start, float end) {
	uint8_t i;
	for (i = 0; i < SIZE; i++) {
		arr[i] = get_random_float(start, end);
	}
	return arr;
}


uint16_t *get_array_uint16_t(uint16_t *arr, uint16_t start, uint8_t step) {
	uint8_t i;
	for (i = 0; i < SIZE; i++) {
		arr[i] = start + step * i;
	}
	return arr;
}


int main(void) {
	uint16_t arrx[SIZE];
	float arry[SIZE];
	uint8_t i;
	while(1) {
		get_array_floats(arry, 40, 50);
		for (i = 0; i < SIZE; i++) {
			printf("%f,", arry[i]);
		}
		printf("\n");

		get_array_uint16_t(arrx, 11, 1);
		for (i = 0; i < SIZE; i++) {
			printf("%d,", arrx[i]);
		}
		printf("\n");

		sleep(1);
	}

	return 0;
}
