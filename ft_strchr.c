/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:09:34 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:43:01 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char a;
	int i;

	a = (char)(c);
	i = 0;
	while(s[i])
	{
		if(s[i] == a)
			return((char *)&(s[i]));
		i++;
	}
	if(s[i] == '\0')
		return((char *)&(s[i]));
	return(NULL);
}

int		main()
{
	printf("%s\n", ft_strchr("5 yo", 'y'));
}
