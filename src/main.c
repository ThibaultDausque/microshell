#include "../includes/microshell.h"

int	main(void)
{
	char	*tmp_prompt;
	char	*prompt;
	char	*line;
	char	**tab;
	int		i;

	tmp_prompt = getenv("PWD");
	prompt = ft_strjoin(tmp_prompt, "> ");
	while(1)
	{
		line = readline(prompt);
		add_to_history(line);
		printf("------WORDS------\n");
		printf("\033[34mnb of words: %d\n\033[0m", count_w(line));
		printf("\n");
		printf("------PARSING------\n");
		tab = split_line(line);
		i = 0;
		while (tab[i])
			printf("*%s* -> ", tab[i++]);
		printf("\n");
	}
	return (0);
}
