#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char *s);

size_t	*ft_strchr(char	*s, int n);

char	*ft_strjoin(char *s1, char *s2);

char	*get_next_line(int fd);
char	*ft_find_line(char *save);
char	*ft_backup(char	*save);
char	*ft_read_and_backup(int fd, char *save);

#endif
