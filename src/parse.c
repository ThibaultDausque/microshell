#include "../includes/microshell.h"

char	*dup_word(int start, int end, char *s)
{
	char	*str;
	int		len;
	int		i;

	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

int	count_w(char *s)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && is_whitespace(s[i]))
			i++;
		if (s[i])
			count++;
		while (s[i] && !is_whitespace(s[i]) && !is_operator(s[i]))
			i++;
	}
	return (count);
}

char	**split_line(char *s)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		count;

	count = count_w(s);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (is_operator(s[i]) && is_whitespace(s[i]))
			i++;
		j = i;
		while (!is_operator(s[j]) && !is_whitespace(s[j]))
			j++;
		tab[k++] = dup_word(i, j, s);
	}
	tab[k] = 0;
	return (tab);
}
