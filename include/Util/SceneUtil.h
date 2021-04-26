#pragma once

#include "kamek.h"
#include "Actor/NameObj/NameObj.h"

namespace MR
{
    void incCoin(s32);
    void incPurpleCoin();

    s32 getStarPieceNum();
    s32 getCoinNum();
    s32 getPurpleCoinNum();
    s32 getPowerStarNum();    

    s32 getChildObjNum(const JMapInfoIter &);
    void getChildObjName(const char**, const JMapInfoIter &, int);
    void initChildObj(NameObj *, const JMapInfoIter &, int);

    const char* getCurrentStageName();
};