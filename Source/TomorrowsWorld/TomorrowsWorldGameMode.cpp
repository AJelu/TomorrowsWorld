// Copyright Epic Games, Inc. All Rights Reserved.

#include "TomorrowsWorldGameMode.h"
#include "TomorrowsWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATomorrowsWorldGameMode::ATomorrowsWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
