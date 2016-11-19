// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TpCargo.h"
#include "TpCargoGameMode.h"
#include "TpCargoPlayerController.h"
#include "TpCargoCharacter.h"

ATpCargoGameMode::ATpCargoGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATpCargoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}