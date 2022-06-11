// write your codes here
#ifndef TESTBED_H
#define TESTBED_H

#include "SelectionAlgorithm.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"

class TestBed {

	SelectionAlgorithm* algorithm;

public:
	TestBed();
	~TestBed();
	void execute();
	void setAlgorithm(int, int);
};

#endif
