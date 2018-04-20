If the import of "C" is immediately preceded by a comment, that comment, called the preamble, is used as a header when compiling the C parts of the package. For example:

```golang
// #include <stdio.h>
// #include <errno.h>
import "C"
```

The preamble may contain any C code, including function and variable declarations and definitions. These may then be referred to from Go code as though they were defined in the package "C". All names declared in the preamble may be used, even if they start with a lower-case letter. Exception: static variables in the preamble may not be referenced from Go code; static functions are permitted.

