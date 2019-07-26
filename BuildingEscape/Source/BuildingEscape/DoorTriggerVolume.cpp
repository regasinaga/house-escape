// Copyright @ 2019 Skidipapap Gameworks Inc.

#include "DoorTriggerVolume.h"

ADoorTriggerVolume::ADoorTriggerVolume()
{
	OnActorBeginOverlap.AddDynamic(this, &ADoorTriggerVolume::OnBeginOverlap);
}

void ADoorTriggerVolume::BeginPlay()
{
	Super::BeginPlay();
	PressuringPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
}

void ADoorTriggerVolume::OnBeginOverlap(class AActor * OverlappedActor, class AActor * OtherActor)
{
	if (OtherActor == PressuringPawn) 
	{
		FString Overlapped = OverlappedActor->GetName();
		FString OtherActort = OtherActor->GetName();
		UE_LOG(LogTemp, Log, TEXT("%s overlapped %s"), *OtherActort, *Overlapped);
		//DoorOpenAction->OpenDoor();
	}
}
