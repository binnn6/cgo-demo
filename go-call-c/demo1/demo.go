package main

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//
//char* Demo(char* name) {
//	int size = strlen("Hello ") + strlen(name) + 1;
//	char* buf = (char *)malloc(size);
//	memset(buf, 0, size);
//
//	sprintf(buf, "Hello %s", name);
//	return buf;
//}
import "C"
import "fmt"
import "unsafe"

func main() {
	name := C.CString("World")
	defer C.free(unsafe.Pointer(name))
	
	ret := C.Demo(name)
	gret := C.GoString(ret)
	C.free(unsafe.Pointer(ret))
	fmt.Println(gret)
}
