// Copyright Epic Games, Inc. All Rights Reserved.

#include "EscapeRoomGameMode.h"
#include "EscapeRoomHUD.h"
#include "EscapeRoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeRoomGameMode::AEscapeRoomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEscapeRoomHUD::StaticClass();
}
