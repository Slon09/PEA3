#include "Graph.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

Graph::Graph() {

}

Graph::Graph(string path) {
    setlocale(LC_ALL, "polish");
    ifstream file;
    file.open(path, ios::in);

    string line;
    if (file.is_open())
    {
        getline(file, line);
        this->instanceName = line;

        getline(file, line);
        istringstream s(line);
        s >> this->vertices;

        this->initMatrix();

        for (int i = 0; i < vertices; i++)
        {
            getline(file, line);
            istringstream s(line);
            for (int j = 0; j < vertices; j++)
            {
                s >> matrix[i][j];
            }
        }
        getline(file, line);
        this->bestPathCost = atoi(line.c_str());
    }

}