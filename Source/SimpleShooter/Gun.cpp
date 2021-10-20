// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"


// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("Root Component");
	SetRootComponent(SceneComponent);
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Gun Mesh");
	GunMesh->SetupAttachment(SceneComponent);
	// ProjectileSpwanPiont = CreateDefaultSubobject<USceneComponent>("Projectile Spwan Piont");
	// ProjectileSpwanPiont->SetupAttachment(GunMesh);
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

