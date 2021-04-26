#pragma once

#include "JGeometry/TVec3.h"
#include "Actor/LiveActor/LiveActor.h"

class NameObj;
class LiveActor;

namespace MR
{
    void connectToScene(NameObj *, int, int, int, int);
    void connectToScene(LiveActor *, int, int, int, int);
    void connectToSceneMapObj(LiveActor *);
    void connectToSceneMapObjWeakLight(LiveActor *);
    void connectToSceneMapObjStrongLight(LiveActor *);
    void connectToSceneMapObjMovement(NameObj *);
    void connectToSceneMapObjNoMovement(LiveActor *);
    void connectToSceneMapObjNoCalcAnim(LiveActor *);
    void connectToSceneCollisionMapObjWeakLight(LiveActor *);
    void connectToSceneCollisionMapObjStrongLight(LiveActor *);
    void connectToSceneCollisionEnemy(LiveActor *);
    void connectToSceneCollisionEnemyStrongLight(LiveActor *);
    void connectToSceneItemStrongLight(LiveActor *);
    void connectToSceneAreaObj(NameObj *);
    void connectToSceneLayout(NameObj *);
    void connectToSceneLayoutMovement(NameObj *);
    void connectToSceneEnemy(LiveActor *);
    void connectToSceneEnemyMovement(NameObj *);
    void connectToSceneCollisionEnemy(LiveActor *);
    void connectToSceneCollisionEnemyStrongLight(LiveActor *);
    void connectToSceneCollisionEnemyNoShadowedMapObjStrongLight(LiveActor *);
    void connectToSceneNpc(LiveActor *);
    void connectToSceneNpcMovement(LiveActor *);

    void registerNameObjToExecuteHolder(NameObj *, int, int, int, int);
    void tryRegisterNamePosLinkObj(const NameObj *, const JMapInfoIter &);

    bool tryFindLinkNamePos(const NameObj *, const char, f32 *[4]);

    void getMapPartsObjectNameIfExistsShapeID();

    bool isStageStateScenarioOpeningCamera();

    bool tryRumblePadMiddle(const void *, s32);
    bool tryRumblePadWeak(const void *, s32);

    void shakeCameraVeryStrong();
    void shakeCameraStrong();
    void shakeCameraNormalStrong();
    void shakeCameraNormalWeak();
    void shakeCameraNormal();
    void shakeCameraWeak();
    void shakeCameraVeryWeak();

    void declareStarPiece(const NameObj *, s32);
    void appearStarPiece(const NameObj *, const JGeometry::TVec3<f32> &, s32, f32, f32, bool);

    void declareCoin(const NameObj *, s32);
    void appearCoinPopToDirection(const NameObj *, const JGeometry::TVec3<f32> &, const JGeometry::TVec3<f32> &, s32);
    void appearCoinPop(const NameObj *, const JGeometry::TVec3<f32> &, s32);

    void declarePowerStar(const NameObj *);
    void declarePowerStar(const NameObj *, s32);
    void requestAppearPowerStar(const NameObj *, const JGeometry::TVec3<f32>&);
    void requestAppearPowerStar(const NameObj *, s32, const JGeometry::TVec3<f32> &);
};