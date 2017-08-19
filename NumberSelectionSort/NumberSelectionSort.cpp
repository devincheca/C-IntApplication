// NumberSelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "integersBetween.h"

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
	int* integersBetweenInput;
	integersBetweenInput = new int[arraySize];
	integersBetween inputs{};
	inputs.readAndOutputTotal(integersBetweenInput, inputOne, inputTwo);
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