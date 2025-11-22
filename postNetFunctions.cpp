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
    string result = "";

    for (char c : zip) {
      result += encodeDigit(c);
}
return result;
}

int computeCheckDigit(const string& zip) {
    int checksum = computeChecksum(zip);
    int remainder = checksum % 10;

    if (remainder == 0) {
      return 0;
    }
    return 10 - remainder;
  }

int computeChecksum(const string& zip) {
    int sum = 0;
    for (char c : zip) {
      sum += c - '0';
    }
    return sum;
  }

string fullPostNet(const string& zip) {
    string encoded = encodeZip(zip);
    int checkDigit = computeCheckDigit(zip);
    string encodedCheck = encodeDigit(char(checkDigit + '0'));

    return "|" + encoded + encodedCheck + "|";
}