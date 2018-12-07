#include "DoomPlayer.h"
#include "Components/InputComponent.h"
#include "Engine.h"


// Sets default values
ADoomPlayer::ADoomPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoomPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADoomPlayer::MoveForward(float Scale)
{
	GEngine->AddOnScreenDebugMessage(-1, Scale, FColor::Purple, "moving forward.");
}

void ADoomPlayer::Turn(float Scale)
{
	GEngine->AddOnScreenDebugMessage(-1, Scale, FColor::Purple, "turning left.");
}

void ADoomPlayer::Strafe(float Scale)
{
	GEngine->AddOnScreenDebugMessage(-1, Scale, FColor::Purple, "strafing left");
}

// Called every frame
void ADoomPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADoomPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ADoomPlayer::MoveForward);
	PlayerInputComponent->BindAxis("Turn", this, &ADoomPlayer::Turn);
	PlayerInputComponent->BindAxis("Strafe", this, &ADoomPlayer::Strafe);
}

