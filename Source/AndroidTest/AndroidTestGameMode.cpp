// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidTestGameMode.h"
#include "AndroidTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidTestGameMode::AAndroidTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
