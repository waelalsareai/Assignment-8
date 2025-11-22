#include <iostream>
#include <fstream>
#include <string>
#include "postNetFunctions.h"

using namespace std;

int main() {
  ifstream infile("input.txt");
    ofstream outfile("output.txt");

    if (!infile.is_open()) {
        cout << "Error opening input.txt" << endl;
        return 1;
    }

    


