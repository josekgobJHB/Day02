/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:53:35 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/12 14:45:02 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(ch c);

void ft_print_comb2(void)
{
				char ch;
    			char ch1;
    			char ch2;
				char ch3;

				ch  = '0';
				ch1 = '0';
				ch2 = '0';
				ch3 = '0';
    			while (ch <= '9')
				{
        						while (ch1 <= '9')
								{
												while (ch2 <= '9')
												{
                												while(ch3 <= '9')
																{
																  if( ((ch != ch2) || (ch1 != ch3)) && (ch <= ch2 && ch1 <= ch3) ) 
																  {				
																	  			ft_putchar(ch);
                    															ft_putchar(ch1);
                    															ft_putchar(' ');
                    															ft_putchar(ch2);
                    															ft_putchar(ch3);
                    															if((ch == '9') && (ch1 == '8') && (ch2 == '9') && (ch3 == '9'))
                    															{
                        														break;
                    															}
                    															ft_putchar(',');
                    															ft_putchar(' ');

																	}
																  ch3++;
																}
                    
                 								ch2++;
												ch3 = '0';
												}

								ch1++;
								ch3 = ch1 + 1;
								ch2 = '0';
								}
				ch++;
				ch1 = '0';
				}
				ft_putchar('\n');


}
