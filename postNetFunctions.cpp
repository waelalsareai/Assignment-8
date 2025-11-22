#include "postNetFunctions.h"
#include <string>
#include <stdexcept>
using std::string;

// --- Function definitions will go here ---
string parseState(const string& line) {
    return "";
}

string parseCity(const string& line) {
    return "";
}

string parseZip(const string& line) {
    return "";
}

string encodeDigit(char digit) {
    switch (digit) {
      case '0': return "11000";
      case '1': return "00011";
      case '2': return "00101";
      case '3': return "00110";
      case '4': return ""
}

string encodeZip(const string& zip) {
    return "";
}

int computeCheckDigit(const string& zip) {
    return 0;
}

string fullPostNet(const string& zip) {
    return "";
}