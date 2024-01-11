#include <unistd.h>

void print_char(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int	w;
	int	x;
	int	y;
	int	z;
	
	w = 0;
	while (w <= 9)
	{
		x = 0;
		
		while (x <= 9)
		{
			y = w;
			z = x + 1;
			
			while (y <= 9)
			{
				while (z <= 9)
				{
					print_char(w + '0');
					print_char(x + '0');
					print_char(' ');
					print_char(y + '0');
					print_char(z + '0');

					if (w == 9 && x == 8 && y == 9 && z == 9)
					{
						return ;
					}
					else
					{
					print_char(',');
					print_char(' ');
					}
				z++;
				}
			y++;
			z = 0;
			}
		x++;
		}
	w++;
	}
}

int main() {
    // Call the function to display combinations
    ft_print_comb2();

    return 0;
}

