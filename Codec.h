#pragma once
#include <string>
using namespace std;
class Codec
{
public:
	Codec();
	string decode(string morse);
	string encode(string text);
};

