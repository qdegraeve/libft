/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdegraev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 12:11:48 by qdegraev          #+#    #+#             */
/*   Updated: 2016/03/16 09:45:56 by qdegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flags(char *f, t_arg *a)
{
	while (f[a->i] == '-' || f[a->i] == '+' || f[a->i] == ' ' || f[a->i] == '#'
			|| f[a->i] == '0')
	{
		if (f[a->i] == '-')
			a->f_m = 1;
		if (f[a->i] == '+')
			a->f_p = 1;
		if (f[a->i] == ' ')
			a->f_sp = 1;
		if (f[a->i] == '#')
			a->f_h = 1;
		if (f[a->i] == '0')
			a->f_zero = 1;
		if (f[a->i + 1] != '\0')
			a->i++;
		else
			return ;
	}
	check_min_lenght(f, a);
}