#include "logic.h"

int count_elements_great_number(int array[DEFAULT_SIZE], int length, int number) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] > number) {
			count++;
		}
	}

	return count;
}