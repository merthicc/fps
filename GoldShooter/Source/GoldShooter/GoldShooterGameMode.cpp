// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GoldShooterGameMode.h"
#include "GoldShooterHUD.h"
#include "UObject/ConstructorHelpers.h"

AGoldShooterGameMode::AGoldShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/WeaponSystem/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGoldShooterHUD::StaticClass();
}
