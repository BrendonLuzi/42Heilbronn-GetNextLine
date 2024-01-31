/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzi <bluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:20:59 by bluzi             #+#    #+#             */
/*   Updated: 2023/02/09 15:31:23 by bluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE	5
# endif

void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_find_nl(const char *s);
int		ft_strealloc(char **str, size_t size);

char	*make_line(char **remainder, int nl_pos, int rem_len);
char	*get_next_line(int fd);

#endif
