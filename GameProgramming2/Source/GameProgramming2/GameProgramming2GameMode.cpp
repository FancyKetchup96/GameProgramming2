// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GameProgramming2GameMode.h"
#include "GameProgramming2HUD.h"
#include "GameProgramming2Character.h"
#include "UObject/ConstructorHelpers.h"

AGameProgramming2GameMode::AGameProgramming2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameProgramming2HUD::StaticClass();
}
