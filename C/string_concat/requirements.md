# Software Requirements: String Concatenation in C

## Environment
- OS: Ubuntu 24.04
- Language: C (C99 or later)
- Compiler: gcc

## Requirements

### Input
- The program must prompt the user for two separate strings
- Each must be retrieved with `fgets()`

### Concatenation
- Both strings must be joined using `strcat()`
- The result must be stored in a third `char` array large enough to hold both strings combined
- Buffer size must be defined as a constant using `#define`

### Safety
- Strip the trailing newline from both inputs before concatenating
- The destination buffer must be initialised with `memset()` before use
- The destination buffer must be large enough to hold both strings and the null terminator

### Output
```
Enter first string:  hello
Enter second string: world
Result: helloworld
```

## Submission
- Single file named `main.c`
- Must compile cleanly with: `gcc -Wall -o main main.c`
- No warnings permitted

## Resources
- `strcat()` — https://man7.org/linux/man-pages/man3/strcat.3.html
- `memset()` — https://man7.org/linux/man-pages/man3/memset.3.html
- `strlen()` (useful for sizing) — https://man7.org/linux/man-pages/man3/strlen.3.html
- Intro to strings in C — https://www.learn-c.org/en/Strings
