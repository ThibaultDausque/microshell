#include "../includes/microshell.h"

// O_WRONLY: write only while opening the file.
// O_APPEND: add content at the end of the file.
// O_CREAT: create the file if it isn't existing.
void	add_to_history(char *line)
{
	int		fd;
	int		len;

	if (!line)
		return ;
	add_history(line);
	fd = open(".microshell_history", O_WRONLY | O_APPEND | O_CREAT, 0644);
	if (fd < 0)
		return ;
	len = ft_strlen(line);
	write(fd, line, len);
	write(fd, "\n", 1);
	close(fd);
}

// faire une fonction afin de lire l'historique en entier (option)
