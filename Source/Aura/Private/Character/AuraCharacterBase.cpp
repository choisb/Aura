#include "Character/AuraCharacterBase.h"

const FName WeaponName = "Weapon";
const FName WeaponHandSocketName = "WeaponHandSocket";

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(WeaponName);
	Weapon->SetupAttachment(GetMesh(), WeaponHandSocketName);
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}