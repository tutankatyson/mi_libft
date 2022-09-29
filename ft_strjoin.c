/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanch <jorsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:54:34 by jorsanch          #+#    #+#             */
/*   Updated: 2022/09/28 21:48:38 by jorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = (char *)malloc(sizeof(char)
			*(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (str)
		ft_stpcpy(ft_stpcpy(str, s1), s2);
	return (str);
}
