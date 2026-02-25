#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;
	int number;

	do {
		system("cls");
		cout << "Enter the size of array: ";
		cin >> size;
	} while (size <= 0);

	cout << "Enter number: ";
	cin >> number;

	init_random(array, size, 0, 10);

	print("Array:\n");
	print(convert(array, size) + "\n");

	print("Count of greatest numbers: " + to_string(count_elements_great_number(array, size, number)));

	return 0;
}