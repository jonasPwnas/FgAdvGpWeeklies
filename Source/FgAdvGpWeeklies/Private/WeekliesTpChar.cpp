// Fill out your copyright notice in the Description page of Project Settings.


#include "FgAdvGpWeeklies/Public/WeekliesTpChar.h"


// Sets default values
AWeekliesTpChar::AWeekliesTpChar()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeekliesTpChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeekliesTpChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AWeekliesTpChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

