/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_octant_1_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 12:05:49 by cglavieu          #+#    #+#             */
/*   Updated: 2015/02/02 11:24:44 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmlx.h"

void octant_1(int x1, int y1, int x2, int y2, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = x2 - x1;
	dy = y2 - y1;

	e = dx;
	dx = e * 2;
	dy = dy * 2;
	while (x1 != x2)
	{
		mlx_pixel_put(c->mlx, c->win, x1, y1, 0x7FFF00);
		e = e - dy;
		if (e < 0)
		{
			y1++;
			e = e + dx;
		}
		x1++;
	}
}

void octant_2(int x1, int y1, int x2, int y2, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = x2 - x1;
	dy = y2 - y1;

	e = dy;
	dy = e * 2;
	dx = dx * 2;
	while (y1 != y2)
	{
		mlx_pixel_put(c->mlx, c->win, x1, y1, 0x7FFF00);
		e = e - dx;
		if (e < 0)
		{
			x1++;
			e = e + dy;
		}
		y1++;
	}
}

void octant_3(int x1, int y1, int x2, int y2, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = x2 - x1;
	dy = y2 - y1;

	e = dy;
	dy = e * 2;
	dx = dx * 2;
	while (y1 != y2)
	{
		mlx_pixel_put(c->mlx, c->win, x1, y1, 0x7FFF00);
			e = e + dx;
		if (e <= 0)
		{
			x1--;
			e = e + dy;
		}
		y1++;
	}
}

void octant_4(int x1, int y1, int x2, int y2, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = x2 - x1;
	dy = y2 - y1;

	e = dx;
	dx = e * 2;
	dy = dy * 2;
	while (x1 != x2)
	{
		mlx_pixel_put(c->mlx, c->win, x1, y1, 0x7FFF00);
		e = e + dy;
		if (e >= 0)
		{
			y1++;
			e = e + dx;
		}
		x1--;
	}
}