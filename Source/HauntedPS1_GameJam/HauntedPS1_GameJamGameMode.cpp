// Copyright Epic Games, Inc. All Rights Reserved.

#include "HauntedPS1_GameJamGameMode.h"
#include "HauntedPS1_GameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHauntedPS1_GameJamGameMode::AHauntedPS1_GameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
