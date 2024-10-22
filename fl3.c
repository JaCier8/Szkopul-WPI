#include <stdio.h>
#include <stdlib.h>
void _zakres(int i, char* is, int M, char *funkcja){
if (! (0 <= i && i < M)) {
fprintf(stderr, "Przekroczenie zakresu w %s: argument %s to %d, miało być 0 <= %s < %d\n",
funkcja, is, i, is, M); exit(1); } }
int _wartosc(int i, int t[], int N){
_zakres(i, "i", 2*N, "Wartosc"); return t[i]; }
void _zamien(int i, int j, int t[], int N){
_zakres(i, "i", 2*N, "Zamien"); _zakres(j, "j", 2*N, "Zamien");
int tmp = t[i]; t[i] = t[j]; t[j] = tmp; }
int main(){
    int N; scanf("%d", &N);
    int t[2*N]; for(int i = 0; i < 2*N; i++) scanf("%d", &t[i]);
#define Wartosc(i) _wartosc(i,t,N)
#define Zamien(i,j) _zamien(i,j,t,N)
// Mamy ustalone N i zawartość urn
// -------------------------------------
// Poniżej wpisz swój fragment programu:
// -------------------------------------
    int u = 0, d = 1, z = 1, i = 0;
    while(u < 2*N) {
        if (Wartosc(u) >= 0) {
            while(Wartosc(d) >= 0) d += 2;
            Zamien(u,d);
            u += 2;
            }
        else u += 2;
        }
    d = 1;
    while (d < 2*N) {
        if (Wartosc(d) != 0) d += 2;
        else {
            Zamien(d,z);
            d += 2;
            z += 2;
        }
    }
    for(int i=0; i<2*N; i++) printf("%d ", t[i]);
    printf("\n");
    return 0;
}