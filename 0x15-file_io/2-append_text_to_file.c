#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return:  NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, leng = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leng = 0; text_content[leng];)
leng++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, leng);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
