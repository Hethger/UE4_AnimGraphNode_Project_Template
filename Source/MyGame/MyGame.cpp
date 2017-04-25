// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGame.h"

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, MyGame, "MyGame" );
class FMyGameModule : public FDefaultGameModuleImpl
{
#if    WITH_EDITOR
	virtual void StartupModule() override
	{
		FModuleManager::Get().LoadModule(TEXT("BlueprintGraph"));
		FModuleManager::Get().LoadModule(TEXT("AnimGraph"));
		FModuleManager::Get().LoadModule(TEXT("MyGameEditor"));
	}
#endif
};

IMPLEMENT_PRIMARY_GAME_MODULE(FMyGameModule, MyGame, "MyGame");