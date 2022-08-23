#include <stdio.h>
#include <stdlib.h>

int main() {
int * players;
  
puts("How many players are playing?");
scanf("%d", players);

int player[32];

for(int i = 0; i < players - 1; i++){
  player[i] = 0;
}

for(int i = 0; i < players - 1; i++){
  int * b;
  
  printf("Put the of score Player %d gained this round/n", i);
  scanf("%d", b);

  player[i] = player[i] + c;
  
  printf("Player %d's score is now %d/n", i, player[i]);
}
  
return 0;
}