// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "PlayerShip.h"
#include "WorldCameraActor.generated.h"

UCLASS()
class AWorldCameraActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldCameraActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float ScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MaxHorizontalOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float LastKnowPlayerShipOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D ScreenDimensions;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector StartLocation;

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void MoveActor(FVector& Amount);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void GetMovementVectors(float DeltaTime, FVector& ForwardMovementVector, FVector& HorizontalMovementVector);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void CalculateForwardMovement(float DeltaTime, FVector& ForwardMovement);	
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector CalculateHorizontalMovement(float DeltaTime);	
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalculateAveragePlayerShipOffset(TArray<APlayerShip*> PlayerShips, float& Offset);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void MoveCameraOffset(FVector Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerViewCamera(APlayerController* Target);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetDistanceTravelled();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetScreenDimensions(float Height, float Width);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void GetScreenDimensions(float& Height, float& Width);

};
