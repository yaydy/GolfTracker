#include <stdio.h>
#include <stdlib.h>
int player[32];
int players;
int holes;
int b;

void getPlayers();
void scoreTracker();
void getHoles();
void setPlayerValues();

int main() {  

getPlayers();

getHoles();

setPlayerValues();

scoreTracker();
  return 0;
}

void getPlayers(){
  puts("How many players are playing?");
  scanf("%d", &players);
}

void getHoles(){
  puts("How many holes are there?");
  scanf("%d", &holes);
}

void setPlayerValues(){
    for(int i = 0; i < players; i++){
    player[i] = 0;
  }
}

void scoreTracker(){
  for(int i = 0; i < holes; i++){
    for(int i = 0; i < players; i++){  
      printf("Put the of score Player %d gained this round\n", i + 1);
      scanf("%d", &b);

      player[i] = player[i] + b;
  
      printf("Player %d's score is now %d\n", i + 1, player[i]);
    }
  }
}