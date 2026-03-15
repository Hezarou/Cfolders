# Software Requirements: String Parsing in C

## Environment
- OS: Ubuntu 24.04
- Language: C (C99 or later)
- Compiler: gcc

## Requirements

### Input
- The program must prompt the user for a sentence (e.g. `"hello world foo"`)
- Input must be retrieved using `fgets()`

### Parsing
- The string must be split into tokens using `strtok()`
- Each token must be printed on its own line
- The delimiter must be a space `" "`

### Safety
- Strip the trailing newline from `fgets()` before parsing
- Do not modify the original string — copy it first using `strcpy()` if the original is needed later

### Output
```
Enter a sentence: hello world foo
Token: hello
Token: world
Token: foo
```

## Submission
- Single file named `main.c`
- Must compile cleanly with: `gcc -Wall -o main main.c`
- No warnings permitted

## Resources
- `strtok()` — https://man7.org/linux/man-pages/man3/strtok.3.html
- `strcpy()` — https://man7.org/linux/man-pages/man3/strcpy.3.html
- Intro to strings in C — https://www.learn-c.org/en/Strings
