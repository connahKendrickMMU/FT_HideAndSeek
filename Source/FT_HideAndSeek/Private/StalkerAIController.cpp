// Fill out your copyright notice in the Description page of Project Settings.


#include "StalkerAIController.h"

void AStalkerAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// do stuff with the AI
}

void AStalkerAIController::BeginPlay()
{
	Super::BeginPlay();
	// set up the AI, like finding the player and setting it as a target
	// or set up a patrol route for the AI to follow
}