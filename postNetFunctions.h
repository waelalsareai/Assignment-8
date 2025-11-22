#ifndef POSTNETFUNCTIONS_H
#define POSTNETFUNCTIONS_H

#include <string>
using std::string;

// --- Funcgion declarations will go here ---
string parseState(const string& line);
string parseCity(const string& line);
string parseZip(const string& line);

string encodeDigit(char digit);
string encodeZip(const string& zip);
int computeCheckDigit(const string& zip);
int computeChecksum(const std::string& zip);
string fullPostNet(const string& zip);

#endif