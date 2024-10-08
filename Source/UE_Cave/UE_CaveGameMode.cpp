// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_CaveGameMode.h"
#include "UE_CaveCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_CaveGameMode::AUE_CaveGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
