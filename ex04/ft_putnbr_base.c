/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:57:18 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/14 09:57:23 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	baselen(char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
		continue ;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;
	int		i;
	char	cha;
	char	*str;

	nbase = baselen(base);
	i = -1;
	if (nbr != 0)
	{
		if (nbr / nbase != 0)
		{
			nbet = nbr / nbase;
			cha = base[nbr / nbase - 1];
		}
		nbet = nbr % nbase;
		cha = base[nbr % nbase - 1];
		write(1, &cha, sizeof(nbet));
	}
	else
		write(1, "0", 1);
}

int	main(void)
{
	ft_putnbr_base(15, "h");
}
/*no funciona*/