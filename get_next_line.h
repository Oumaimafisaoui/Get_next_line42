/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:56:21 by oufisaou          #+#    #+#             */
/*   Updated: 2022/12/30 20:38:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_read_backup(int fd, char *text_backup);
char	*ft_take_line(char *text_backup);
char	*ft_update_backup(char *text_backup);
size_t	ft_strlen(char *string);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(char *string, int n);
#endif
