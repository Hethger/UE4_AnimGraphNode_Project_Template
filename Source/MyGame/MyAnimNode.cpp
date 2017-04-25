// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGame.h"
#include "Animation/AnimInstanceProxy.h"
#include "MyAnimNode.h"


FMyAnimNode::FMyAnimNode()
{

}

void FMyAnimNode::Initialize(const FAnimationInitializeContext & Context)
{
	FAnimNode_Base::Initialize(Context);

	BasePose.Initialize(Context);
}

void FMyAnimNode::CacheBones(const FAnimationCacheBonesContext & Context)
{
	BasePose.CacheBones(Context);
}

void FMyAnimNode::Update(const FAnimationUpdateContext & Context)
{
	EvaluateGraphExposedInputs.Execute(Context);
	BasePose.Update(Context);
}

void FMyAnimNode::Evaluate(FPoseContext & Output)
{
	// Evaluate the input
	BasePose.Evaluate(Output);
}

void FMyAnimNode::GatherDebugData(FNodeDebugData & DebugData)
{
	FString DebugLine = DebugData.GetNodeName(this);

	
	DebugData.AddDebugItem(DebugLine);

	BasePose.GatherDebugData(DebugData);
}

