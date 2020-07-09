/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:25:37 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/09 12:25:59 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

void ft_print_alphabet(void) {
  char letter;

  letter = 'a';
  while (letter <= 'z') {
    ft_putchar(letter);
    letter++;
  }
}
