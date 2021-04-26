#pragma once

#include "kamek.h"
#include "NameObj/NameObj.h"

namespace MR
{
    void incCoin(int);
    void incPurpleCoin();

    u32 getStarPieceNum();
    u32 getCoinNum();
    u32 getPurpleCoinNum();
    u32 getPowerStarNum();    

    s32 getChildObjNum(const JMapInfoIter &);
    void getChildObjName(const char**, const JMapInfoIter &, int);
    void initChildObj(NameObj *, const JMapInfoIter &, int);

    NameObj* initChildObj(const JMapInfoIter &, int);

    const char* getCurrentStageName();
};