// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldCameraActor.h"

// Sets default values
AWorldCameraActor::AWorldCameraActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldCameraActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldCameraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWorldCameraActor::MoveActor(FVector& Amount)
{
}

void AWorldCameraActor::GetMovementVectors(float DeltaTime, FVector& ForwardMovementVector, FVector& HorizontalMovementVector)
{
}

void AWorldCameraActor::CalculateForwardMovement(float DeltaTime, FVector& ForwardMovement)
{
}

FVector AWorldCameraActor::CalculateHorizontalMovement(float DeltaTime)
{
	return FVector();
}

void AWorldCameraActor::CalculateAveragePlayerShipOffset(TArray<APlayerShip*> PlayerShips, float& Offset)
{
}



void AWorldCameraActor::MoveCameraOffset(FVector Amount)
{
}

void AWorldCameraActor::SetPlayerViewCamera(APlayerController* Target)
{
}

float AWorldCameraActor::GetDistanceTravelled()
{
	return 0.0f;
}

void AWorldCameraActor::SetScreenDimensions(float Height, float Width)
{
}

void AWorldCameraActor::GetScreenDimensions(float& Height, float& Width)
{
}


