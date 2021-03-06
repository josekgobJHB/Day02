/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:25:37 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/09 13:59:59 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_alphabet(void) {
  char letter;

  letter = 'a';
  while (letter <= 'z') {
    ft_putchar(letter);
    letter++;
  }
}
