// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "MySword.h"


// Sets default values
AMySword::AMySword()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMySword::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMySword::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AMySword::HitEnemy()
{

}