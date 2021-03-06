#pragma once

#include "Actor/LiveActor/LiveActor.h"
#include "Actor/Model/ModelObj.h"

#define UNIZO 0
#define UNIZO_LAND 1
#define UNIZO_SHOAL 2

class Unizo : public LiveActor
{
public:
	Unizo(const char *);

	virtual ~Unizo();
	virtual void init(const JMapInfoIter &);
	virtual void initAfterPlacement();
	virtual void appear();
	virtual void makeActorAppeared();
	virtual void kill();
	virtual void makeActorDead();
	virtual Mtx* getBaseMtx() const;
	virtual void startClipped();
	virtual void control();
	virtual void calcAndSetBaseMtx();
	virtual void attackSensor(HitSensor *, HitSensor *);
	virtual u32 receiveMsgPlayerAttack(u32, HitSensor *, HitSensor *);
	virtual u32 receiveMsgEnemyAttack(u32, HitSensor *, HitSensor *);
	virtual u32 receiveOtherMsg(u32, HitSensor *, HitSensor *);

	void initType(const JMapInfoIter &);
	void exeWait();
	void exeJump();
	void exeChase();
	void exeAttack();
	void exeCollideEnemy();
	void exeBreak();
	void exeFireDown();
	void exeJumpDown();
	void updateRotate();
	void updateVelocity();
	void udpateInfluence();
	void udpateBlink();
	void updateSurfaceEffect();
	void deleteEffect();
	void doJump();
	void doAttack(HitSensor *);
	void doJumpDown();
	void doFireDown(const TVec3f &);
	void doBreak();
	void doSpin();
	bool isBreakGround();
	bool isBreakNow() const;
	bool tryPointBind();
	bool isEnablePointBind() const;
	void appearBreakModel();
	void startWallHitSound();
	void startNeedleSound();

	s32 mType; // 90
	f32 _94[4]; // TVec4f
	Mtx _A4;
	Mtx _D4;
	u32 _104;
	u32 _108;
	u32 _10C;
	u32 _110;
	f32 _114;
	ModelObj* mBreakModel; // 118
	u32 _11C;
	u32 _120;
	u32 _124;
	u32 _128;
	f32 _12C;
	f32 _130;
	u32 _134;
};
