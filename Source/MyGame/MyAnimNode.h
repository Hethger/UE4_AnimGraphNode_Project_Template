// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Animation/AnimNodeBase.h"
#include "MyAnimNode.generated.h"
/**
 * 
 */

USTRUCT()
struct MYGAME_API FMyAnimNode : public FAnimNode_Base
{
	GENERATED_BODY()
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink BasePose;

public:
	FMyAnimNode();
	
	// FAnimNode_Base interface
	virtual void Initialize(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones(const FAnimationCacheBonesContext& Context) override;
	virtual void Update(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate(FPoseContext & Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface

};
