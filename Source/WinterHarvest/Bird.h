// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bird.generated.h"

UCLASS()
class WINTERHARVEST_API ABird : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Bird properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Properties")
	float FlightSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Properties")
	float TurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Properties")
	bool bCanFly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Properties")
	FString BirdSpecies;

private:
	// Internal bird state
	bool bIsFlying;
	FVector FlightDirection;

public:
	// Bird behaviors
	UFUNCTION(BlueprintCallable, Category = "Bird Actions")
	void StartFlying();

	UFUNCTION(BlueprintCallable, Category = "Bird Actions")
	void StopFlying();

	UFUNCTION(BlueprintCallable, Category = "Bird Actions")
	void Chirp();

	UFUNCTION(BlueprintPure, Category = "Bird State")
	bool IsFlying() const { return bIsFlying; }
};
