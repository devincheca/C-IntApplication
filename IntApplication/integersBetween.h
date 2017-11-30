#pragma once
#ifndef INTEGERSBETWEEN_H
#define INTEGERSBETWEEN_H
#include <iostream>
#include "integersBetween.h"
using namespace std;
class integersBetween
{
	int arraySize(int start, int end);
	void integersBetween::readInInput(int integers[], int start, int end, int length);
	void print(int integers[], int length);
public:
	integersBetween();
	~integersBetween();
	void readAndOutputTotal(int integers[], int start, int end);
};
#endif // !INTEGERSBETWEEN_H