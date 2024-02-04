#include <iostream>
#include <string>

using namespace std;

void array_init(int* array, int length, int min, int max) {

	if (max < min)
	{
		swap(min, max);
	}

	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (max - min + 1) + min;
	}
}

string convert_array_to_string(int* array, int length) {

	string msg = "";

	for (int i = 0; i < length; i++)
	{
		msg += to_string(array[i]) + " ";
	}

	return msg;
}

int first_zero_index_in_array(int* array, int length) {

	for (int i = 0; i < length; i++)
	{
		if (array[i] == 0)
		{
			return i;
		}
	}

	return length;
}

int last_zero_index_in_array(int* array, int length) {

	for (int i = length - 1; i >= 0; i--)
	{
		if (array[i] == 0)
		{
			return i;
		}
	}

	return length;
}

int min_element_index(int* array, int length) {

	int min = array[0];
	int index_min = 0;

	for (int i = 1; i < length; i++)
	{
		if (min > array[i])
		{
			min = array[i];
			index_min = i;
		}
	}

	return index_min;
}

int max_element_index(int* array, int length) {

	int max = array[0];
	int index_max = 0;

	for (int i = 1; i < length; i++)
	{
		if (max < array[i])
		{
			max = array[i];
			index_max = i;
		}
	}

	return index_max;
}

int first_positive_element_index(int* array, int length) {

	for (int i = 0; i < length; i++)
	{
		if (array[i] > 0)
		{
			return i;
		}
	}

	return -1;
}

int last_positive_element_index(int* array, int length) {

	for (int i = length - 1; i >= 0; i--)
	{
		if (array[i] > 0)
		{
			return i;
		}
	}

	return length;
}

int sum_between_two_elements
(int* array, int length, int first_index, int last_index) {

	if (first_index > last_index)
	{
		swap(first_index, last_index);
	}

	int sum = 0;

	for (int i = first_index + 1; i < last_index; i++)
	{
		sum += array[i];
	}

	return sum;
}

int product_between_two_elements
(int* array, int length, int first_index, int last_index) {

	if (first_index > last_index)
	{
		swap(first_index,last_index);
	}

	int product = 1;

	for (int i = first_index + 1; i < last_index; i++)
	{
		product *= array[i];
	}

	return product;
}
