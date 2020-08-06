// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "AmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT1_API AAmmoPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AAmmoPickup();

	// Override the WasCollected function - use Implementation because it's a Blueprint Native event
	void WasCollected_Implementation();

};
