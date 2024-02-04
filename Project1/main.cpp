#include <iostream>

using namespace std;

void array_init(int*, int, int, int);
string convert_array_to_string(int*, int);
int first_zero_index_in_array(int*, int);
int last_zero_index_in_array(int*, int);
int min_element_index(int*, int);
int max_element_index(int*, int);
int first_positive_element_index(int*, int);
int last_positive_element_index(int*, int);
int sum_between_two_elements(int*, int, int, int);
int product_between_two_elements(int*, int, int, int);

int main() {

	const int size = 100;
	int numbers[size];

	int length;
	cout << "Input array length : ";
	cin >> length;

	array_init(numbers, length, -5, 5);
	cout << convert_array_to_string(numbers, length);

	int productBetweenMinMax =
		product_between_two_elements(numbers, length,
			min_element_index(numbers, length), max_element_index(numbers, length));
	cout << "\nProduct between min and max elements is " << productBetweenMinMax;

	int sumBetweenFirstLastZero =
		sum_between_two_elements(numbers, length,
			first_zero_index_in_array(numbers, length),
			last_zero_index_in_array(numbers, length));
	cout << "\nSum between first zero element and last zero element is " 
		<< sumBetweenFirstLastZero;

	int sumUntilLastPositive =
		sum_between_two_elements(numbers, length, -1,
			last_positive_element_index(numbers, length));
	cout << "\nSum until last positive element is " << sumUntilLastPositive;

	int sumBetweenFirstLastPositive =
		sum_between_two_elements(numbers, length, 
			first_positive_element_index(numbers, length),
			last_positive_element_index(numbers, length));
	cout << "\nSum between first and last positive elements is " << sumBetweenFirstLastPositive;

	int sumAfterFirstPositive =
		sum_between_two_elements(numbers, length,
			first_positive_element_index(numbers, length),length);
	cout << "\nSum after first positive element is " << sumAfterFirstPositive;

	return 0;
}
