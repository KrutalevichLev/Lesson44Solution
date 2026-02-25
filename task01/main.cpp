#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	do {
		system("cls");
		cout << "Enter the size of array: ";
		cin >> size;
	} while (size <= 0);

	init_random(array, size, 0, 100);

	print("Array:\n");
	print(convert(array, size));

	return 0;
}