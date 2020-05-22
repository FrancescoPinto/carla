// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma de Barcelona (UAB). This work is licensed under the terms of the MIT license. For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AProceduralMeshActor.generated.h"

UCLASS()
class CARLA_API AProceduralMeshActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProceduralMeshActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	bool isSidewalk = false;

public:
	UFUNCTION()
	bool getIsSidewalk() const;
public:
	UFUNCTION()
	void setIsSidewalk(bool sidewalk);


};
