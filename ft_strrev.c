/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:47:02 by ghamelek          #+#    #+#             */
/*   Updated: 2018/10/01 19:47:04 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *s)
{
	char *s_end;
	char c;

	s_end = s + ft_strlen(s) - 1;
	while (s < s_end)
	{
		c = *s;
		*s++ = *s_end;
		*s_end-- = c;
	}
}