// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlackieGameMode.h"
#include "BlackieCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlackieGameMode::ABlackieGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
