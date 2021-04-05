#ifndef PISTOL_H_
#define PISTOL_H_

#include "Defines.h"

struct Pistol{
  enum PistolType pistolType;
  int damagePerRound;
  int clipSize;
  int currClipBullets;
  int remainingAmmo;
  int (*fire)(PlayerVitalData *playerData);
};

int glockFire(PlayerVitalData *targetData,Pistol *pistol);
int deagleFire(PlayerVitalData *targetData,Pistol *pistol);
int reloadPistol(Pistol *pistol);
void setPistol(Pistol *pistol);

#endif /* PISTOL_H_ */