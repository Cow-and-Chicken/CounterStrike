#include "Pistol.h"

int glockFire(PlayerVitalData *targetData,Pistol *pistol){
    if(pistol->currClipBullets==ZERO){
        reloadPistol(pistol);
        return ZERO;
    }

    for(int i=0;i<FIRE_PER_ROUND;i++){
        if(targetData->armor>ZERO){
            if(pistol->damagePerRound/2>targetData->armor){
                
            }
        }
    }
}
int deagleFire(PlayerVitalData *targetData,Pistol *pistol);
int reloadPistol(Pistol *pistol);
void setPistol(Pistol *pistol);