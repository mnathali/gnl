# Get next line
## description
get_next_line is C-function that can read a string from file descriptor line by line.
The main feature of the function consists that it can use buffer size that you choose while compilling because it has static variables.
The bonus part of get_next_line can differ file descriptors because it has an array that will store used descriptors. So it will work with diffrent file descriptors;

## Compiling

Example of compilling that set buffer size:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
```
BUFFER_SIZE=... sets size of bffer while compilling