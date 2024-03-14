// Fill out your copyright notice in the Description page of Project Settings.


#include "MDP_PlayerState.h"

AMDP_PlayerState::AMDP_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	//NetUpdateFrequency = 100.f;
}
