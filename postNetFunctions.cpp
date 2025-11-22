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
      case '4': return "01001";
      case '5': return "01010";
      case '6': return "01100";
      case '7': return "10001";
      case '8': return "10010";
      case '9': return "10100";
      default:
      throw std::logic_error("invalid digit for PostNET");
    }
}

string encodeZip(const string& zip) {
    return "";
}

int computeCheckDigit(const string& zip) {
    return 0;
}

int computeChecksum(const string& zip)
}

string fullPostNet(const string& zip) {
    return "";
}