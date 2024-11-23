// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_base_Actor.h"
#include "TimerManager.h"

// Sets default values
ACpp_base_Actor::ACpp_base_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	count++;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void ACpp_base_Actor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();
	
}

// Called every frame
void ACpp_base_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ACpp_base_Actor::ShowActorInformation() {

	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *ActorName);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), IsAlive);
}
void ACpp_base_Actor::SinMovement() {
	
}
int ACpp_base_Actor::count = 0;
