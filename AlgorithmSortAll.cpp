// write your codes here
#include "AlgorithmSortAll.h"
#include <iostream>

AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k) {
	this->k = k;
}

int AlgorithmSortAll::select() {
	int* numbers = 0;
	int temp;
	int check;
	int N;
	std::cin >> N;
	numbers = new int[N];

	for (int i = 0; i < N; i++) {
		std::cin >> numbers[i];
	}

	for (int i = 1; i < N; i++) {
		temp = numbers[i];
		check = i;

		while (check > 0 && temp > numbers[check - 1]) {
			numbers[check] = numbers[check - 1];
			check--;
		}

		numbers[check] = temp;
	}

	return numbers[k - 1];
	delete[] numbers;
	numbers = 0;
}