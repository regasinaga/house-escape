// Copyright @ 2019 Skidipapap Gameworks Inc.


#include "DoorOpenAction.h"

// Sets default values for this component's properties
UDoorOpenAction::UDoorOpenAction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UDoorOpenAction::BeginPlay()
{
	Super::BeginPlay();

	PressuringPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
}

void UDoorOpenAction::OpenDoor()
{
	AActor* DoorActor = GetOwner();
	FRotator DoorYawRotator = FRotator(0.f, -90.f, 0.f);
	DoorActor->SetActorRotation(DoorYawRotator);
}

// Called every frame
void UDoorOpenAction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (PressurePlate->IsOverlappingActor(PressuringPawn))
	{
		OpenDoor();
	}
}

