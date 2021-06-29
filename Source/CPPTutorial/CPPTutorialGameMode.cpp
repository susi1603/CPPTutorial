// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPTutorialGameMode.h"
#include "CPPTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPTutorialGameMode::ACPPTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
