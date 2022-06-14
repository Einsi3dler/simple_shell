#include "shell.h"

void loop(void)
{
  char *line;
  char **args;
  int status;
  do {
    write(1,":/  ", 4);
    line = read_line();
    args = split_line(line);
    status = execute(args);

    free(line);
    free(args);
  } while (status);
}

