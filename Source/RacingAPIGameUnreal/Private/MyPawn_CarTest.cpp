// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn_CarTest.h"

// Sets default values
AMyPawn_CarTest::AMyPawn_CarTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void AMyPawn_CarTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn_CarTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn_CarTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

