// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_base_Actor.generated.h"

USTRUCT(BlueprintType)
struct FTransformStruct {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CurrentLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator CurrentRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CurrentScale = FVector(1.0f, 1.0f, 1.0f);

};

UENUM(BlueprintType)
enum class EMovementState : uint8 {
	Mobility,
	Static
};

UCLASS()
class CPP_BASE_API ACpp_base_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACpp_base_Actor();
	static int count;

protected:
	// Called when the game starts or when spawned

	UFUNCTION(BlueprintCallable)
	void ShowActorInformation();

	UFUNCTION(BlueprintCallable)
	void SinMovement();

	UPROPERTY(EditAnywhere);
	float Amplitude=70;

	UPROPERTY(EditAnywhere);
	float Frequency=4;


	FVector InitialLocation=FVector::ZeroVector;
	

	virtual void BeginPlay() override;

	


	UPROPERTY(EditAnywhere);
	int EnemyNum = 18;

	UPROPERTY(EditDefaultsOnly);
	float CurrentHealth = 57.5467;

	UPROPERTY(EditInstanceOnly);
	bool IsAlive = true;

	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* Mesh;


	UPROPERTY(VisibleAnywhere);
	FString ActorName = "A_CppBase_C_ " + FString::FromInt(count);	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
