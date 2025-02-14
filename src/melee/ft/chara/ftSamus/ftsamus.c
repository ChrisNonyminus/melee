#include "ftsamus.h"

void ftSamus_OnDeath(HSD_GObj* fighterObj) {
    Fighter* fighter = fighterObj->user_data;
    func_80074A4C(fighterObj, 0, 0);
    fighter->sa.samus.x222C = 0;
    fighter->sa.samus.x2230 = 0;
    fighter->sa.samus.x2238 = 0;
    fighter->sa.samus.x2244 = 0;
    fighter->sa.samus.x223C = 0;
    fighter->sa.samus.x2240 = 0;
}

void ftSamus_OnLoad(HSD_GObj* fighterObj) {

    Fighter* fighter = fighterObj->user_data;
    void** item_list = fighter->x10C_ftData->x48_items;

    fighter->x2224_flag.bits.b7 = 1;

    PUSH_ATTRS(fighter, ftSamusAttributes);
    
    func_8026B3F8(item_list[0], 0x5DU);
    func_8026B3F8(item_list[1], 0x5EU);
    func_8026B3F8(item_list[2], 0x5FU);
    func_8026B3F8(item_list[3], 0x60U);
}