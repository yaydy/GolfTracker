#include <stdio.h>
#include <stdlib.h>

int player[32];

int getPlayers();
int getHoles();
void scoreTracker();
void setPlayerValues();

int main() {
int players, holes, b;  

players = getPlayers(0);

holes = getHoles(0);

setPlayerValues(players);

scoreTracker(holes, players, b);

return 0;
}

int getPlayers(int playerget){
  puts("How many players are playing?");
  scanf("%d", playerget);
  return playerget;
}

int getHoles(int holes){
  puts("How many holes are there?");
  scanf("%d", holes);
  return holes;
}

void setPlayerValues(int players){
    for(int i = 0; i < players; i++){
    player[i] = 0;
  }
}

void scoreTracker(int holes, int players, int b){
  for(int i = 0; i < holes; i++){
    for(int i = 0; i < players; i++){  
      printf("Put the of score Player %d gained this round\n", i + 1);
      scanf("%d", b);

      player[i] = player[i] + b;
  
      printf("Player %d's score is now %d\n", i + 1, player[i]);
    }
  }
}