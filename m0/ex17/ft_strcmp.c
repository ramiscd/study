/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youvisa <youvisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:59:16 by youvisa           #+#    #+#             */
/*   Updated: 2025/07/12 14:35:30 by youvisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while(s1[i])
  {
    if(s1[i] != s2[i])
    {
      return (s1[i] - s2[i]);
    }
    i++;
  }
  return (0);
}

// int main(void)
// {
//   char s1[] = "ABC";
//   char s2[] = "ABB";

//   int res =  ft_strcmp(s1, s2);
//   printf("%i", res);
// }