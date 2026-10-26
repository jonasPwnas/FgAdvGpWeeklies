// Fill out your copyright notice in the Description page of Project Settings.


#include "FgAdvGpWeeklies/Public/WeekliesPawn.h"


// Sets default values
AWeekliesPawn::AWeekliesPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeekliesPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeekliesPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AWeekliesPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

