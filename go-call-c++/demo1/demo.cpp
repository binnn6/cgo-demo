#include <iostream>
#include <string.h>
#include "demo.h"

using namespace std;


const char * Demo(const char* name) {
	auto str = "Hello " + string(name);
	return strdup(str.c_str());
}
