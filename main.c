#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_letter(char *nam, int num, int size)
{
	int i;
	i = 0;
	while(i < size)
	{
		ft_putchar(nam[i]);
		i++;
		if(i == size)
		{
			int t;

			t = 0;

			char print[] = "Letters: ";
			ft_putchar('\n');

			while(t < 9)
			{
				ft_putchar(print[t]);
				t++;
			}
			ft_putchar(num + '0');
			ft_putchar('\n');
		}
	}	
}
void ft_print(char *name, int size)
{
	int i;
	int num;
	i = 0;
	num = 0;

	while(i < size)
	{
		if(name[i] == 'l')
		{
			num++;
		}
		i++;
	}
	ft_print_letter(name, num, size);
}

void ft_letter_print(void)
{
	char name[] = "Hello, World";
	ft_print(name, 12);
}

int main(void)
{
	ft_letter_print();
	return(0);
}
