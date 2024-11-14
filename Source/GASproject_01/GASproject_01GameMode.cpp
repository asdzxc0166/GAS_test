// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASproject_01GameMode.h"
#include "GASproject_01Character.h"
#include "UObject/ConstructorHelpers.h"

AGASproject_01GameMode::AGASproject_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
