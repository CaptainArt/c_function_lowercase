#include<stdio.h>

char lowercase(char symbol)
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char d = 'd';
	char e = 'e';
	char f = 'f';
	char g = 'g';
	char h = 'h';
	char i = 'i';
	char j = 'j';
	char k = 'k';
	char l = 'l';
	char m = 'm';
	char n = 'n';
	char o = 'o';
	char p = 'p';
	char q = 'q';
	char r = 'r';
	char s = 's';
	char t = 't';
	char u = 'u';
	char v = 'v';
	char w = 'w';
	char x = 'x';
	char y = 'y';
	char z = 'z';
	
	if(symbol == 'A')
	{
		return a;
	}
	
	if(symbol == 'B')
	{
		return b;
	}
	
	if(symbol == 'C')
	{
		return c;
	}
	
	if(symbol == 'D')
	{
		return d;
	}
	
	if(symbol == 'E')
	{
		return e;
	}
	
	if(symbol == 'F')
	{
		return f;
	}
	
	if(symbol == 'G')
	{
		return g;
	}
	
	if(symbol == 'H')
	{
		return h;
	}
	
	if(symbol == 'I')
	{
		return i;
	}
	
	if(symbol == 'J')
	{
		return j;
	}
	
	if(symbol == 'K')
	{
		return k;
	}
	
	if(symbol == 'L')
	{
		return l;
	}
	
	if(symbol == 'M')
	{
		return m;
	}
	
	if(symbol == 'N')
	{
		return n;
	}
	
	if(symbol == 'O')
	{
		return o;
	}
	
	if(symbol == 'P')
	{
		return p;
	}
	
	if(symbol == 'Q')
	{
		return q;
	}
	
	if(symbol == 'R')
	{
		return r;
	}
	
	if(symbol == 'S')
	{
		return s;
	}
	
	if(symbol == 'T')
	{
		return t;
	}
	
	if(symbol == 'U')
	{
		return u;
	}
	
	if(symbol == 'V')
	{
		return v;
	}
	
	if(symbol == 'W')
	{
		return w;
	}
	
	if(symbol == 'X')
	{
		return x;
	}
	
	if(symbol == 'Y')
	{
		return y;
	}
	
	if(symbol == 'Z')
	{
		return z;
	}
	
}

main()
{
	char StringMassiv[30];
	char low;
	printf("Enter char symbol string:  ");
	scanf("%s", &StringMassiv);
	printf("\nConverted char symbol string :  ");
	for(int i = 0;i < 30;i++)
	{	
		if(StringMassiv[i] == '\0')
		{
			break;
		}
		low = lowercase(StringMassiv[i]);
		printf("%c", upp);
	}
}
