// write your codes here
#include "AlgorithmSortK.h"
#include <iostream>

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {
	this->k = k;
}

int AlgorithmSortK::select() {
	int* numbers = 0;
	int N;
	int num;
	std::cin >> N;
	numbers = new int[this->k];

	for (int i = 0; i < this->k; i++) {
		std::cin >> numbers[i];
	}

	sort(numbers);


	for (int i = this->k; i < N; i++) {
		std::cin >> num;

		if (num > numbers[this->k - 1]) {
			numbers[this->k - 1] = num;
			sort(numbers);
		}
	}

	return numbers[k - 1];
	delete[] numbers;
	numbers = 0;
}

int* AlgorithmSortK::sort(int array[]) {
	int temp;
	int check;

	for (int i = 1; i < this->k; i++) {
		temp = array[i];
		check = i;

		while (check > 0 && temp > array[check - 1]) {
			array[check] = array[check - 1];
			check--;
		}

		array[check] = temp;
	}
	return array;
}
