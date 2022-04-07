// Copyright Epic Games, Inc. All Rights Reserved.

#include "GE_F2GameMode.h"
#include "GE_F2Character.h"
#include "UObject/ConstructorHelpers.h"

AGE_F2GameMode::AGE_F2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
