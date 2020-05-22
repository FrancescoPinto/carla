// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma de Barcelona (UAB). This work is licensed under the terms of the MIT license. For a copy, see <https://opensource.org/licenses/MIT>.

//#include "CarlaUE4.h"
#include "AProceduralMeshActor.h"


// Sets default values
AProceduralMeshActor::AProceduralMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProceduralMeshActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProceduralMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AProceduralMeshActor::getIsSidewalk() const
{
	return isSidewalk;
}

void AProceduralMeshActor::setIsSidewalk(bool sidewalk)
{
	isSidewalk = sidewalk;
}
