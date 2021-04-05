#ifndef DEFINES_H_
#define DEFINES_H_

enum OurBool{
  ZERO=0,
  ONE=1
};

enum PistolType {
  GLOCK, DESERT_EAGLE
};

enum GlockDefines {
  FIRE_PER_ROUND = 3
};

enum PlayerDefines {
  PLAYER_ONE, PLAYER_TWO, PLAYERS_COUNT
};

typedef struct {
  int health;
  int armor;
} PlayerVitalData;

typedef struct Player Player;


typedef struct Pistol Pistol;

#endif /* DEFINES_H_ */
