// NumberSelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int arraySize(int start, int end);
void print(int integers[], int length);
void readInInput(int integers[], int start, int end, int length);

int main(int argc, char *argv[])
{
	std::cout << "Input two integers to sort\nInteger One: ";
	int inputOne = 0, inputTwo = 0, placeHolder = 0;
	std::cin >> inputOne;
	std::cout << "Integer Two: ";
	std::cin >> inputTwo;
	if (inputOne > inputTwo) {
		placeHolder = inputOne;
		inputOne = inputTwo;
		inputTwo = placeHolder;
	}
	placeHolder = arraySize(inputOne, inputTwo) + 1;
	const int arraySize = placeHolder;
	int* integersBetween;
	integersBetween = new int[arraySize];
	readInInput(integersBetween, inputOne, inputTwo, arraySize);
	print(integersBetween, arraySize);
	int pause = 0;
	std::cin >> pause;
	if (pause != 0) {
		std::cin >> pause;
	}
    return 0;
}

int static arraySize(int start, int end) {
	int cardinality = 0;
	cardinality = end - start;
	return cardinality;
}

static void print(int integers[], int length) {
	int i = 0;
	std::cout << "All Integers In Between (Inclusive)\n";
	for (i = 0; i < length; i++) {
		std::cout << integers[i];
		std::cout << "  ";
	}
	int sum = length * (integers[0] + integers[length - 1]) * .5;
	std::cout << "\nThe sum of the integers is: "
		<< sum
		<< "\nType 0 to end program execution.";
}

static void readInInput(int integers[], int start, int end, int length) {
	int i = 0;
	for (i = 0; i < length; i++) {
		integers[i] = start + i;
	}
}
