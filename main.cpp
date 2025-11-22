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

    string line;
    while (getline(infile, line)) {

        // Parse city, state, zip
        string city, state, zip;
        size_t firstComma = line.find(',');
        size_t secondComma = line.find(',', firstComma + 1);

        city = line.substr(0, firstComma);
        state = line.substr(firstComma + 1, secondComma - firstComma - 1);
        zip = line.substr(secondComma + 1);

        // Clean formatting -> New York, NY 56458
        outfile << city << ", " << state << " " << zip << endl;

        //


