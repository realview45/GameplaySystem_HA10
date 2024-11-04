// RealView45


#include "MyCharacterBase_HA10.h"

// Sets default values
AMyCharacterBase_HA10::AMyCharacterBase_HA10()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterBase_HA10::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterBase_HA10::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterBase_HA10::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

