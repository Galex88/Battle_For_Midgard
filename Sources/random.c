#include <stdlib.h>

int	ft_random()
{
  int	random;

  random = (rand() % 100) + 1;
  return (random);
}