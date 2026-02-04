// Fill out your copyright notice in the Description page of Project Settings.

#include "Bird.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
ABird::ABird()
{
	// Set this pawn to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	// Initialize default values
	FlightSpeed = 600.0f;
	bCanFly = true;
	BirdSpecies = TEXT("Generic Bird");
	bIsFlying = false;
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// If the bird is flying, move it forward
	if (bIsFlying && bCanFly)
	{
		FVector ForwardDirection = GetActorForwardVector();
		FVector NewLocation = GetActorLocation() + (ForwardDirection * FlightSpeed * DeltaTime);
		SetActorLocation(NewLocation, true);
	}
}

// Called to bind functionality to input
void ABird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ABird::StartFlying()
{
	if (bCanFly)
	{
		bIsFlying = true;
		UE_LOG(LogTemp, Log, TEXT("%s started flying"), *BirdSpecies);
	}
}

void ABird::StopFlying()
{
	bIsFlying = false;
	UE_LOG(LogTemp, Log, TEXT("%s stopped flying"), *BirdSpecies);
}

void ABird::Chirp()
{
	UE_LOG(LogTemp, Log, TEXT("%s: Chirp chirp!"), *BirdSpecies);
}
