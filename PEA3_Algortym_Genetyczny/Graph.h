#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <queue>
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
class Graph {

public:
	Graph();
	Graph(string path);

	int** matrix;
	int  bestBathost;
	int* bestPath;
	int vertices;
	string instanceName;

private:
	void initMatrix();

};