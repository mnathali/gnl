/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:27:35 by mnathali          #+#    #+#             */
/*   Updated: 2021/11/29 21:04:01 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# define SZ BUFFER_SIZE

char	*get_next_line(int fd);
int		ft_strchr_mod(const char *s, int c);
char	*ft_strjoin_mod(char const *s1, char const *s2);
char	*change_red(char *btr);

#endif