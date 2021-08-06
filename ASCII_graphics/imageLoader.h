#pragma once
#include <string>
using namespace std;

class imageLoader
{
private:
public:
	imageLoader();
	int getImage(string filepath);
	int sendImage(string filepath);
};