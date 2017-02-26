// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UE_05_TestingGrounds.h"
#include "UE_05_TestingGroundsGameMode.h"
#include "UE_05_TestingGroundsHUD.h"
#include "UE_05_TestingGroundsCharacter.h"

AUE_05_TestingGroundsGameMode::AUE_05_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE_05_TestingGroundsHUD::StaticClass();
}
