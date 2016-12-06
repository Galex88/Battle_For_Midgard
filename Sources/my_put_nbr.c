#include "my_string.h"

void	my_put_nbr(int n)
{
  int	size_div;
  int	res;

  size_div = 1;
  if (n < 0)
  {
    my_putchar('-');
    if (n == -2147483648)
    {
      my_putstr("2147483648");
      return;
    }
    n = - (n);
  }
  while ((n / size_div) >= 10)
  {
    size_div = size_div * 10;
  }
  while (size_div > 0)
  {
    res = (n / size_div) % 10;
    my_putchar(res + 48);
    size_div = size_div / 10;
  }
}