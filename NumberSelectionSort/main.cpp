// NumberSelectionSort.cpp : Defines the entry point for the console application.
// Devin Checa
#include "stdafx.h"
#include <iostream>
#include "integersBetween.h"
using namespace std;
int arraySize(int start, int end);
int main(int argc, char *argv[])
{
	bool done = false;
	while (!done)
	{
		cout << "Input two integers to sort\nInteger One: ";
		int inputOne = 0, inputTwo = 0, placeHolder = 0;
		cin >> inputOne;
		cout << "Integer Two: ";
		cin >> inputTwo;
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
		delete[] integersBetweenInput;
		cout << "Enter 0 to input two numbers, enter 1 to terminate execution.";
		cin >> done;
	}
    return 0;
}

int static arraySize(int start, int end) {
	int cardinality = 0;
	cardinality = end - start;
	return cardinality;
}