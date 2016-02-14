// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GASAbilityState.h"
#include "GASAbilityStateCastingBase.h"
#include "GASAbilityStateChanneled.generated.h"

UCLASS(DefaultToInstanced, EditInLineNew, Within = GASAbilityBase, meta = (DisplayName = "Casting - Channeled"))
class UGASAbilityStateChanneled : public UGASAbilityStateCastingBase
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ExposeOnSpawn), Category = "Config")
		float Interval;
protected:
	FTimerHandle ChannelTimerHandle;
public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginState(UGASAbilityState* PrevState) override;
	virtual void EndState() override;
	virtual void ExecuteActionSequence() override;
	virtual void StopActionSequence() override;
	virtual void FinishActionSequence() override;

	virtual void ExecuteAbility() override;
	UFUNCTION()
		void ExecuteChannel();
	void ChannelFinished();
private:
	float CurrentCastTime;
	float CurrentPeriodCount;
};