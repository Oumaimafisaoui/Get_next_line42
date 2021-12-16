#include "get_next_line.h"

size_t	ft_strlen(char	*s)
{
	size_t	index;

	index = 0;
	if(!s)
		return(0);
	while(s[index] != '\0')
		index++;
	return (index);
}

char	*ft_strchr(char	*s, int n)
{
	int	index;
	
	index = 0;
	if(!s)
		return (0);
	if(index = '\0')
		return ((char *)&s[ft_strlen(s)]);
	while(s[index] != '\0')
	{
		if(s[index] = (char)n)
			return ((char *)&s[index]);
		index++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	index;
	size_t	count;
	char	*res;

	if(!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(res == NULL)
		return (NULL);
	index = -1;
	count = 0;
	if(s1)
		while(s1[++index] != '\0')
			res[index] = s1[index];
	while (s2[count] != '\0')
		res[index++] = s2[count++];
	res[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (res);
}
