// Copyright @ 2019 Skidipapap Gameworks Inc.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "DoorOpenAction.h"
#include "DoorTriggerVolume.generated.h"

UCLASS()
class BUILDINGESCAPE_API ADoorTriggerVolume : public ATriggerVolume
{
	GENERATED_BODY()

public:

	// constructor sets default values for this actor's properties
	ADoorTriggerVolume();

	// overlap begin function
	UFUNCTION()
		void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:		
	AActor* PressuringPawn;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* DoorComponent;
};
