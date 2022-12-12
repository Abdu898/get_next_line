# get_next_line
42 get_next_line
## Introduction
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.
## Discription
* Repeated calls (e.g., using a loop) to get_next_line() function lets you read the text file pointed to by the file descriptor, one line at a time.
* the function returns the line that was read. If there is nothing else to read or if an error occurred, it returns NULL.
* the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.
* the helper functions needed in the get_next_line_utils.c file.
## Compile
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

* get_next_line() has an undefined behavior if the file pointed to by the file descriptor changed since the last call whereas read() didn’t reach the end of file, also it has an undefined behavior when reading a binary file.
