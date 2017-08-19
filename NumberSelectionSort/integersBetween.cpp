#include "stdafx.h"
#include <iostream>
#include "integersBetween.h"

integersBetween::integersBetween()
{
	int arraySize(int start, int end);
	void print(int integers[], int length);
	void readAndOutputTotal(int integers[], int start, int end);
}


integersBetween::~integersBetween()
{
}

void integersBetween::readAndOutputTotal(int integers[], int start, int end) {
	readInInput(integers, start, end, arraySize(start, end));	
}

void integersBetween::readInInput(int integers[], int start, int end, int length) {
	int i = 0;
	for (i = 0; i < length + 1; i++) {
		integers[i] = start + i;
	}
	print(integers, length);
}

void integersBetween::print(int integers[], int length) {
	int i = 0;
	std::cout << "All Integers In Between (Inclusive)\n";
	for (i = 0; i < length + 1; i++) {
		std::cout << integers[i];
		std::cout << "  ";
	}
	int sum = (length + 1) * (integers[0] + integers[length]) * .5;
	std::cout << "\nThe sum of the integers is: "
		<< sum
		<< "\nType 0 to end program execution.";
}

int integersBetween::arraySize(int start, int end) {
	int cardinality = 0;
	cardinality = end - start;
	return cardinality;
}