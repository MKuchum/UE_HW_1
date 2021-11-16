// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "BasicPlatform.generated.h"

/**
 * 
 */
UCLASS()
class HW1_API ABasicPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

public: 
	ABasicPlatform();
	virtual void BeginPlay() override;
	virtual void Tick(float deltaSeconds) override;
	
};
