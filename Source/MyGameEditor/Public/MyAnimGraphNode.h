// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AnimGraphNode_Base.h"
#include "MyAnimNode.h"
#include "MyAnimGraphNode.generated.h"
/**
 * 
 */
UCLASS()
class MYGAMEEDITOR_API UMyAnimGraphNode : public UAnimGraphNode_Base
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = Settings)
		FMyAnimNode Node;

	//~ Begin UEdGraphNode Interface.
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//~ End UEdGraphNode Interface.

	//~ Begin UAnimGraphNode_Base Interface
	virtual FString GetNodeCategory() const override;
	//~ End UAnimGraphNode_Base Interface

	UMyAnimGraphNode(const FObjectInitializer& ObjectInitializer);
};
