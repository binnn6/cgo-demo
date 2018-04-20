#include "demo.h"


char* Demo(char* name) {
	int size = strlen("Hello ") + strlen(name) + 1;
	char* buf = (char *)malloc(size);
	memset(buf, 0, size);

	sprintf(buf, "Hello %s", name);
	return buf;
}