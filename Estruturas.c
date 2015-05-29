#include <stdio.h>
#include <math.h>

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

void leInstancias(struct Ponto2D *p, struct Circulo *c)
{
    printf("\nDigite o valor de x do Ponto: ");
    scanf("%f", &p->x);
    printf("\nDigite o valor de y do Ponto: ");
    scanf("%f", &p->y);

    printf("\n");

    printf("\nAgora digite o valor de x do centro do circulo: ");
    scanf("%f", &c->centro.x);
    printf("\nAgora digite o valor de y do centro do circulo: ");
    scanf("%f", &c->centro.y);
    printf("\nAgora digite o valor do raio do circulo: ");
    scanf("%f", &c->raio);
    printf("\nAgora digite o valor de cor R para o circulo: ");
    scanf("%d", &c->cor.r);
    printf("\nAgora digite o valor de cor G para o circulo: ");
    scanf("%d", &c->cor.g);
    printf("\nAgora digite o valor de cor B para o circulo: ");
    scanf("%d", &c->cor.b);
}

void mostraInstancias(const struct Ponto2D *p, const struct Circulo *c)
{
    printf("Ponto:\n\tX - %.2f\n\tY - %.2f\n\n", p->x, p->y);
    printf("Circulo:\n\tX - %.2f\n\tY - %.2f\n\tRaio - %.2f\n\tCor R - %d\n\tCor G - %d\n\tCor B - %d\n\n", c->centro.x, c->centro.y, c->raio, c->cor.r, c->cor.g, c->cor.b);
}

int ehInterno(const struct Ponto2D *p, const struct Circulo *c)
{
    float distancia;

    distancia = sqrt(pow((p->x - c->centro.x), 2) + pow((p->y - c->centro.y), 2));

    if(distancia <= c->raio)
        return 1;
    else
        return 0;
}

int leArquivoInstancias(char nomearquivo[], struct Ponto2D *p, struct Circulo *c)
{
    char buffer[10];
    int n;

    FILE *fp = fopen(nomearquivo, "r");

    if(fp == NULL)
        return -1;
    else
        fscanf(fp,"%s", buffer);
        fscanf(fp,"%f %f", &p->x, &p->y);
        fscanf(fp,"%s", buffer);
        fscanf(fp,"%f %f %f %d %d %d", &c->centro.x, &c->centro.y, &c->raio, &c->cor.r, &c->cor.g, &c->cor.b);
        fclose(fp);
        return 1;
}

int main()
{
    struct Ponto2D ponto1;
    struct Circulo circ1;

    //leInstancias(&ponto1, &circ1);
    if(leArquivoInstancias("teste.txt", &ponto1, &circ1) == -1)
       return -1;
    mostraInstancias(&ponto1, &circ1);
    //printf("\n%d\n", ehInterno(&ponto1, &circ1));
}
