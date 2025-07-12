/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youvisa <youvisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 10:15:48 by youvisa           #+#    #+#             */
/*   Updated: 2025/07/12 13:33:15 by youvisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i])
  {
    i++;
  }
  return(i);
}

// int main(void)
// {
//   char str[] = "hello";
//   char *pstr = str;
//   int res = ft_strlen(pstr);
//   printf("tamanho: %i", res);
// }