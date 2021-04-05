#include "BattleField.h"

#include <stdio.h>

void createPlayers(BattleField *bf) {
  if (bf) {} //silence ununsed variable warning. Remove me

  int playerHealth = 0;
  int playerArmor = 0;
  Player players[PLAYERS_COUNT];
  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    scanf("%d %d", &playerHealth, &playerArmor);
    players[i].playerData.health=playerHealth;
    players[i].playerData.armor=playerArmor;
    players[i].playerId=i;
  }
  buyPistols(&players[PLAYER_ONE]);
  buyPistols(&players[PLAYER_TWO]);
  bf->players[PLAYER_ONE]=players[PLAYER_ONE];
  bf->players[PLAYER_TWO]=players[PLAYER_TWO];
}

void buyPistols(Player *player) {

  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;
  Pistol pistol;
  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize, &pistolRemainingAmmo);
        pistol.pistolType=pistolId;
        pistol.damagePerRound=pistolDamagePerRound;
        pistol.clipSize=pistolClipSize;
        pistol.currClipBullets=pistolClipSize;
        pistol.remainingAmmo=pistolRemainingAmmo;
        setPistol(&pistol);
  }
  player->pistol=pistol;
}

void startBattle(BattleField *bf) {
  if (bf) {} //silence ununsed variable warning. Remove me
}

