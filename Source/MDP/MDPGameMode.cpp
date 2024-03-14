// Copyright Epic Games, Inc. All Rights Reserved.

#include "MDPGameMode.h"
#include "MDPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMDPGameMode::AMDPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
