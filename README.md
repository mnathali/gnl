# Get next line
get_next_line is C-function that can read a string from file descriptor line by line.
Main feature of the function it that it can use buffer size that you choose while compilling becouse it has static variables.
Bonus part of get next line can work with diffrent file descriptors;

Example of compilling that set buffer size: cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c 
