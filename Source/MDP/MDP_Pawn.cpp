// Fill out your copyright notice in the Description page of Project Settings.


#include "MDP_Pawn.h"

// Sets default values
AMDP_Pawn::AMDP_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMDP_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMDP_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMDP_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

