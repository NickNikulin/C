/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaquand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 21:24:52 by mlaquand          #+#    #+#             */
/*   Updated: 2019/07/07 22:39:32 by mlaquand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_line(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == 1 && b == x))
		ft_putchar('o');
	else
	{
		if ((b == 1 && a == y) || (a == y && b == x))
			ft_putchar('o');
		else
		{
			if ((b < x && b > 1) && (a < y && a > 1))
				ft_putchar(' ');
			else
			{
				if ((a > 1 && a < y) && (b == 1 || b == x))
					ft_putchar('|');
				else
					ft_putchar('-');
			}
		}
	}
}

void		rush(int x, int y)
{
	int b;
	int a;

	a = 1;
	if (x > 0 && y > 0)
	{
		while (a <= y)
		{
			b = 1;
			while (b <= x)
			{
				ft_line(a, b, x, y);
				b++;
			}
			a++;
			ft_putchar('\n');
		}
	}
}
