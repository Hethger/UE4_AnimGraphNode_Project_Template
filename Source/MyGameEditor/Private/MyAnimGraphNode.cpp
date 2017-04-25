// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameEditor.h"
#include "MyAnimGraphNode.h"

#define LOCTEXT_NAMESPACE "A3Nodes"

UMyAnimGraphNode::UMyAnimGraphNode(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

FLinearColor UMyAnimGraphNode::GetNodeTitleColor() const
{
	return FLinearColor::Green;
}

FText UMyAnimGraphNode::GetTooltipText() const
{
	return LOCTEXT("MyAnimGraphNode", "MyAnimGraphNode");
}

FText UMyAnimGraphNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("MyAnimGraphNode", "MyAnimGraphNode");
}

FString UMyAnimGraphNode::GetNodeCategory() const
{
	return TEXT("MyAnimGraphNode");
}

#undef LOCTEXT_NAMESPACE

