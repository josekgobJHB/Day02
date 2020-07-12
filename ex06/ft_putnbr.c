/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:07:56 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/12 17:08:02 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char	c) 
{ 
				write(1, &c, 1); 
}

void	ft_putnbr(int	nb)
{
				while(nb)
				{
						
    						int		count;
							int		temp;
							int		quo;
   
        					int quo = newN % 10;
        					if (quo != 0)
             				if (N % quo == 0) count++;
        					newN = newN / 10;
								int temp;
								int temp1;
				
								temp = (nb / 10);
								temp1 = (nb % 10);

								ft_putchar(temp + '0');
								ft_putchar(temp1 + '0');
				}




				ft_putchar('\n');
			
}

int		main(void) 
{
  				ft_putnbr(42);
  
  				return (0);
}

