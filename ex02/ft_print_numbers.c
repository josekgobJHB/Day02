/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:15:04 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/09 14:59:45 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char c);

void ft_print_numbers (void) {
    char ch;
    ch	= '1';

    while(ch <= '9') {
        ft_putchar(ch);
		ch++;}
}

