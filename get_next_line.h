/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:12:58 by mnathali          #+#    #+#             */
/*   Updated: 2021/11/29 21:25:21 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define SZ BUFFER_SIZE

char	*get_next_line(int fd);
int		ft_strchr_mod(const char *s, int c);
char	*ft_strjoin_mod(char const *s1, char const *s2);
char	*change_red(char *btr);

#endif