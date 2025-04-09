#ifndef MICROSHELL_H
# define MICROSHELL_H

# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>

//////PARSE//////
char	**split_line(char *s);

///////UTILS//////
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *s);
int		is_whitespace(char c);
int		is_operator(char c);
int		count_w(char *s);

#endif
