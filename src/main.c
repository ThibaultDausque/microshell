#include "../includes/microshell.h"

int	main(void)
{
	char	*tmp_prompt;
	char	*prompt;
	char	*line;

	tmp_prompt = getenv("PWD");
	prompt = ft_strjoin(tmp_prompt, ">");
	while(1)
	{
		line = readline(prompt);
		printf("------\n");
		printf("\033[34mnb of words: %d\n\033[0m", count_w(line));
		printf("------\n");
	}
	return (0);
}
