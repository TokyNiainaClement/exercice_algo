#include <stdio.h>

long long puissance_lineaire_iterative(long long a, int n) {
    long long resultat = 1;

    int i = 0;

    while (i < n)
    {
        resultat*= a;
        i++;
    }

    return resultat;
    
}

int main(int argc, char const *argv[])
{
    long long res = puissance_lineaire_iterative(6,3);
    printf("%lld\n", res);
    return 0;
}
