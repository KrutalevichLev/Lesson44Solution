#include "util.h"

void print(string msg) {
	cout << msg;
}

void init_random(int array[DEFAULT_SIZE], int length, int a, int b) {
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}

string convert(int array[DEFAULT_SIZE], int length) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		msg += to_string(array[i]) + " ";
	}

	return msg;
}