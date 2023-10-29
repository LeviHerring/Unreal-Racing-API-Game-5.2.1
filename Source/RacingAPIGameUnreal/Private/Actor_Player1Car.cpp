// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_Player1Car.h"

// Sets default values
AActor_Player1Car::AActor_Player1Car()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_Player1Car::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActor_Player1Car::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

