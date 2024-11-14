// Fill out your copyright notice in the Description page of Project Settings.


#include "ManukaCharacterBase.h"

// Sets default values
AManukaCharacterBase::AManukaCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AManukaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManukaCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AManukaCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

