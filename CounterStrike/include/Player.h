#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>

#include "Pistol.h"
#include "Defines.h"

struct Player{
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
};

void initPlayer(Player *player, int playerId);

#endif /* PLAYER_H_ */
