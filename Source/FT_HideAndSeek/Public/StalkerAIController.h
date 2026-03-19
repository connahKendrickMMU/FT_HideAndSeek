// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "StalkerAIController.generated.h"

/**
 * 
 */
UCLASS()
class FT_HIDEANDSEEK_API AStalkerAIController : public AAIController
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

};
