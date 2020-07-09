/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:24:59 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/09 14:03:38 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_reverse_alphabet (void) {
  char letter;

  letter = 'z';
  while (letter >= 'a') {
    ft_putchar(letter);
    letter--;
  }
}



