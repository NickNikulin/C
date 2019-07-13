/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaquand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:56:40 by mlaquand          #+#    #+#             */
/*   Updated: 2019/07/11 18:18:33 by mlaquand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if	( hour >= 0 && hour <= 24)
	{
		printf("THE FOLOWING TAKES PLACE BETWEEN");
		if(hour == 0 || hour == 24)
			printf(" 12:00 A.M. AND 1:00 A.M. \n");
		if(hour == 11)
			printf(" 11:00 A.M. AND 12:00 P.M. \n");
		if(hour == 12)
			printf(" 12:00 P.M. AND 1.00 P.M. \n");
		if(hour == 23)
			printf(" 11:00 P.M. AND 12:00 A.M. \n");
		if(hour ==13 && hour <= 23)
			printf(" %d.00 P.M. AND %d.00 P.M. \n", (hour - 12), (hour - 11));
		if(hour >= 1 && hour <= 10)
			printf(" %d.00 A.M. AND %d.00 A.M. \n", (hour), (hour +1));
	}
}
