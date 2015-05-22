#include <stdio.h>

int main()
{
	struct Ponto2D
	{
		float x;
		float y;
	};
	
	struct CorRGB
	{
		unsigned int r;
		unsigned int g;
		unsigned int b;
	};
	
	struct Circulo
	{
		struct 	Ponto2D centro;
		float 	raio;
		float 	cor;
	};
	
	struct Ponto2D ponto1;
	struct Circulo circ1;
}