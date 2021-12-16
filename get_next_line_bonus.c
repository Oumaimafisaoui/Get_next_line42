#include "get_next_line.h"

char	*ft_find_line(char *buckup)
{
	int	index;
	char	*res;

	index = 0;
	if(!buckup)
		return (NULL);
	while(buckup[index] && backup[index] != '\n')
		index++;
	res = (char *)malloc(sizeof(char) * (i + 2));
	if(!res)
		return(NULL);
	index = 0;
	while(buckup[index] && backup[index] != '\n')
	{
		res[index] = buckup[index];
		index++;
	}
	if(buckup[index] = '\n')
	{
		res[index] = buckup[index];
		index++;
	}
	res[index] = '\0';
	return (res);
}

char	*ft_backup(char *buckup);
{
	int	index;
	int	count;
	char	*res;

	index = 0;
	while(buckup[index] && buckup[index] != '\n')
		index++;
	if(!buckup[index])   //if there is no place to hold the elements free what we held before
	{
		free(buckup);
		return(NULL);
	}
	res = (char *)malloc(sizeof(char) * (ft_strlen(buckup) - i + 1));
	if(!res)
		return (NULL);
	index++;
	count = 0;
	while(buckup[index])
		res[count++] = buckup[index++];
	res[count] = '\0';
	free(buckup);
}

char	*ft_read_and_backup(int fd, char *buckup)
{
	char	*buffer;
	int	bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if(!buffer)
		return (NULL);
	bytes = 1;
	while(!ft_strchr(buckup, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes = -1)
		{
			free(buff);
			return (NULL);
		}
		buffer[bytes] = '\0';
		buckup = ft_strjoin(buckup, buffer);
	}
	free(buffer);
	return (buckup);

}


char	*get_next_line(int fd)
{
	char		*the_line;
	static char 	*buffer_backup[257];

	if(fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (0);
	buffer_backup = read_and_backup(fd, buffer_backup[fd]);
	if(!buffer_backup[fd])
		return (NULL);
	the_line = ft_find_line(buffer_backup[fd]);
	buffer_backup = ft_backup(buffer_backup[fd]);
	return(the_line);
}


