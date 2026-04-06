Algorithme Tableau

Variables :
    tab : Tableau[2000] d'entiers
    i : entier
    somme : entier

Début
    somme <- 0

    Ecrire("Veuillez entrer les 2000 entiers : ")

    Pour i de 0 à 1999 faire
        Lire(tab[i])
        somme <- somme + tab[i]
    FinPour

    Ecrire("La somme des 2000 entiers est égale à : ", somme)

Fin

Exo 2

Algorithme Minimum_maximun

Variables :

tab : Tableau[100] de réels

max , min : réels

i : entier

Début

max = max <- tab[0]


Ecrire ("Entrer les 100 réels :")
Lire (tab)
Pour i de 1 à 100 faire
lire(tab[i])
si tab[i} < min alors min <- tab[i] Finsi
si  tab[i] > max alors max <- tab[i] Finsi

Finpour 

Ecrire("le minimun est : ",min)
Ecrire("le maximun est : ", max)

Fin

Exo3 

Algorithme Tableau_caractere

Variables :

car : Tableau[50] de caractere
occ :Tableau[256] d'entiers
i : entiers


Début

Ecrire("entrer les 50 caracteres :")

Pour i de 0 à 49 faire

lire(car[i])

FinPour

Pour i de 0 à 255 faire

occ[car[i]]++

FinPour

Ecrire("le nombre d'occurence des caractereest :")

Pour i de 0 à 255 faire

si occ[i]>0 alors 

Ecrire(i ,"apparait :" ;occ[i] ,"fois")

Finsi

Fin

Exo 4

Algorithme Pairs_Impairs

Variables :
    tab : Tableau[50] d’entiers
    pair : Tableau[50] d’entiers
    impair : Tableau[50] d’entiers
    i , cp , ci: entier
   
Début
 
 cp = ci <-0
 
 Ecrire("Entrer les 50 entiers :")
 
 Pour i de 0 à 49 faire
 
 Lire(tab[i])
 
 si tab[i] <=0 alors
 
 Ecrire("Erreur : entrer un nombre stictement positif :")
 
i--

Finsi
FinPour

Pour i de 0 à 49 faire 

si tab[i] modulo 2 =0 alors

pair[cp] <-tab[i]

cp++

sinon faire

impair[ci] <- tab[i]

ci++

Finsi
FinPour

Ecrire("nombres paire :")

Pour i de 0 à 49 faire

Lire(pair[cp]

FinPour

Ecrire("nombres impair : ")

Pour i de 0 à 49 faire 

Lire[impair[ci])

FinPour

Fin





   
   
    

