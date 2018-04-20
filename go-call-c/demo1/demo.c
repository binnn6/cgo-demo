#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char* Demo(char* name) {
	int size = strlen("Hello ") + strlen(name) + 1;
	char* buf = (char *)malloc(size);
	memset(buf, 0, size);

	sprintf(buf, "Hello %s", name);
	return buf;
}



void main() {
	char *str = Demo("World");
	printf("%s\n", str);
	free(str);
}