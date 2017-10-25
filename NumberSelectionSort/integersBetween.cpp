#include "stdafx.h"
#include "integersBetween.h"
integersBetween::integersBetween()
{
	int arraySize(int start, int end);
	void print(int integers[], int length);
	void readAndOutputTotal(int integers[], int start, int end);
}
void integersBetween::readAndOutputTotal(int integers[], int start, int end) 
{
	readInInput(integers, start, end, arraySize(start, end));	
}
void integersBetween::readInInput(int integers[], int start, int end, int length) 
{
	int i = 0;
	for (i = 0; i < length + 1; i++) {
		integers[i] = start + i;
	}
	print(integers, length);
}
void integersBetween::print(int integers[], int length) 
{
	int i = 0;
	cout << "All Integers In Between (Inclusive)\n";
	for (i = 0; i < length + 1; i++) {
		std::cout << integers[i];
		std::cout << "  ";
	}
	int sum = (length + 1) * (integers[0] + integers[length]) * .5;
	cout << "\nThe sum of the integers is: "
		<< sum << endl;
}
int integersBetween::arraySize(int start, int end) 
{
	int cardinality = 0;
	cardinality = end - start;
	return cardinality;
}
integersBetween::~integersBetween()
{
}