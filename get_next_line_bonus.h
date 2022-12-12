/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:08:23 by ashahin           #+#    #+#             */
/*   Updated: 2022/10/17 12:52:22 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

// get_next_line.c
char		*get_next_line(int fd);
char		*return_line(char **buffer);
char		*reset_func( char **buffer);
char		*read_file(int fd, char **buffer);

//get_next_line_utils.c
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_strrchr(const char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*my_strjoin(char *s1, char *s2);
size_t		ft_find_char(const char *s, int c);
char		*my_strjoin(char *s1, char *s2);

#endif // !GET_NEXT_LINE_H
