#include <stdio.h>
#include <stdlib.h>
int players;
int b;

int main() {  
  
  puts("How many players are playing?");
  scanf("%d", &players);

  int player[32];

for(int i = 0; i < players; i++){
  player[i] = 0;
}

for(;;){
  for(int i = 0; i < players; i++){  
    printf("Put the of score Player %d gained this round\n", i + 1);
    scanf("%d", &b);

    player[i] = player[i] + b;
  
    printf("Player %d's score is now %d\n", i + 1, player[i]);
    }
  }
  return 0;
}