// //
// // Created by jappa on 20/10/2024.
// //
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int N; scanf("%d", &N);
//     int A[N]; for(int i = 0; i < N; i++) scanf("%d", &A[i]);
//     int wynik;
//     // Mamy ustalone N, zawartość tablicy A oraz zadeklarowaną zmienną wynik
//     // ---------------------------------------------------------------------
//     // Poniżej wpisz swój fragment programu:
//     wynik = 0;
//     int i = 0;
//     while(i < N - 1 && A[i] < A[i+1]) i++; //c. rosnący
//     if (i == N - 1) wynik = 1;
//     else {
//         while(i < N - 1 && A[i] > A[i+1]) i++; //c. malejący
//         if (i == N - 1) wynik = 1;
//     }
//     i = 0;
//     while(i < N - 1 && A[i] > A[i+1]) i++; //c. malejący
//     if (i == N - 1) wynik = 1;
//     // ---------------------------------------------------------------------
//     printf("%d\n", wynik);
//     return 0;
// }