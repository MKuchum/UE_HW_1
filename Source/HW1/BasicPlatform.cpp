// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicPlatform.h"

ABasicPlatform::ABasicPlatform() 
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABasicPlatform::BeginPlay()
{
	Super::BeginPlay();
}

void ABasicPlatform::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}
