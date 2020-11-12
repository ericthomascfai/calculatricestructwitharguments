#include <stdio.h>
/*********************prototype fonctions***********************/
double saisienombre1();

double saisienombre1() {
    double nombre1=0; //variable locale
    printf("Entrer le premier nombre\n");
    scanf("%lf",&nombre1);
    return nombre1;
}

double saisienombre2() {
    double nombre2=0; //variable locale
    printf("Entrer le deuxieme nombre\n");
    scanf("%lf",&nombre2);
    return nombre2;
}

double choixoperateur(double nombre2, double nombre1) {
    int op=0;
    int resultat=0;
    printf("1-moins\n");
    printf("2-plus\n");
    printf("3-multiplier\n");
    printf("e-sortie\n");

    scanf(" %c",&op);
    switch (op) {
        case '1':
            resultat=nombre1-nombre2;
            break;
        case '2':
            resultat=nombre1+nombre2;
            break;
        case '3':
            resultat=nombre1*nombre2;
            break;
        case 'e':
            resultat=-1;
            printf("Fin de programme");
            break;

    }
    return resultat; //on retourne le resultat pour pouvoir l'utiliser plus tard
}

void affichageres(double resulat) {
printf("Le resulat du calcul est %lf",resulat);
}

double saisienombre2();
double choixoperateur(double,double);
void affichageres(double);

int main() {
  double resultat=0;
  while (resultat!=-1)
  {
      resultat = choixoperateur(saisienombre2(), saisienombre1());
      affichageres(resultat);
  }
    return 0;
}
