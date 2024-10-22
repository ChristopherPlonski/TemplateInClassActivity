#include <iostream>

template<typename T>
T max_two(T val1, T val2) {
	return (val1 > val2) ? val1 : val2;
}

template<typename T>
T max_two(T val1, T val2, T val3) {
	if (val1 > val2 && val1 > val3) {
		return val1;
	}
	else if (val2 > val1 && val2 > val3) {
		return val2;
	}
	else {
		return val3;
	}
}

template<typename T>
void swap(T &ptr1, T &ptr2) {
	T ptr1Clone = T(ptr1);

	ptr1 = ptr2;

	ptr2 = ptr1Clone;
}

int main() {
	int a = 5;
	int b = 7;
	
	swap(a, b);

	std::cout << "A: " << a << " | B: " << b;
}