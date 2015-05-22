#include <stdio.h>

void leInstancias(struct Ponto2D *p, struct Circulo *c)
{
	printf("\nDigite o valor de x do Ponto: ");
	scanf("%f", p.x);
	printf("\nDigite o valor de y do Ponto: ");
	scanf("%f", p.y);
	
	printf("\n");
	
	printf("\nAgora digite o valor de x do centro do circulo: ");
	scanf("%f", c.centro.x);
	printf("\nAgora digite o valor de y do centro do circulo: ");
	scanf("%f", c.centro.y);
	printf("\nAgora digite o valor do raio do circulo: ");
	scanf("%f", c.raio);
	printf("\nAgora digite o valor de cor R para o circulo: ");
	scanf("%f", c.cor.r);
	printf("\nAgora digite o valor de cor G para o circulo: ");
	scanf("%f", c.cor.g);
	printf("\nAgora digite o valor de cor B para o circulo: ");
	scanf("%f", c.cor.b);
}

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
		struct 	Ponto2D	centro;
		float 	raio;
		struct 	CorRGB	cor;
	};
	
	struct Ponto2D ponto1;
	struct Circulo circ1;
}