// Copyright Epic Games, Inc. All Rights Reserved.

#include "BateryManGameMode.h"
#include "BateryManCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABateryManGameMode::ABateryManGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
