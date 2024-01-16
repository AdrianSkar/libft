/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:20:57 by rmarcano          #+#    #+#             */
/*   Updated: 2024/01/15 16:32:19 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n < 1)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n - 1 > i)
			i++;
		return (s1[i] - s2[i]);
	}
}
