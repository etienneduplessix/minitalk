/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:14:47 by edupless          #+#    #+#             */
/*   Updated: 2023/02/02 13:34:35 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500
# endif 

char		*get_next_line(int fd);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *str);
char		*ft_select(char *line);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
