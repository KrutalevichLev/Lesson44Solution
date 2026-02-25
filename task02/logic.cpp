#include "logic.h"

int count_non_zero_elements(int array[DEFAULT_SIZE], int length){
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] != 0) {
			count++;
		}
	}

	return count;
}