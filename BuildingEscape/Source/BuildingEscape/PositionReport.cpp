// Fill out your copyright notice in the Description page of Project Settings.


#include "PositionReport.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	// bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	// ...

	FString OwnerName = GetOwner()->GetName();
	FString LevelName = GetOwner()->GetLevel()->GetName();
	FString PositionString = GetOwner()->GetActorLocation().ToString();

	UE_LOG(LogTemp, Log, TEXT("position report initialized with owner name: %s with position: %s"), *OwnerName, *PositionString);
}

// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

