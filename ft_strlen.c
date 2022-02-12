/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:25:19 by bdurmus           #+#    #+#             */
/*   Updated: 2022/01/31 16:51:10 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0 ;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
