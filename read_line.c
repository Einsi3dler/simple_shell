#include "shell.h"

char* read_line() {
    char *line = NULL;
    size_t buflen = 0;
    errno = 0;
    ssize_t _strlen = getline(&line, &buflen, stdin);
    if (_strlen < 0) {
        if (errno) {
            perror("kash");
        }
        exit(1);
    }
    return line;
}

