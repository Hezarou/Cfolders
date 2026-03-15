# Software Requirements: String Input in C

## Environment
- OS: Ubuntu 24.04
- Language: C (C99 or later)
- Compiler: gcc

## Requirements

### Input
- The program must prompt the user for a string
- Input must be retrieved using `fgets()` — not `scanf()` or `gets()`

### Storage
- The string must be stored in a fixed-size `char` array
- Buffer size must be defined as a constant using `#define`

### Safety
- The program must strip the trailing newline `fgets()` leaves in the buffer
- The buffer must be null-terminated

### Output
- The program must print the stored string back to confirm it was captured

## Expected Behaviour
```
Enter a string: hello world
You entered: hello world
```

## Submission
- Single file named `main.c`
- Must compile cleanly with: `gcc -Wall -o main main.c`
- No warnings permitted
