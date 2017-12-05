//
// Created by karlz on 29/11/2017.
//

#include "SpeedZoneDetectionComponent.h"

StayWithinLaneComponent::StayWithinLaneComponent(IColourSensorController colourSensor) {
    ColorSensor = colourSensor;
}

StayWithinLaneComponent::~StayWithinLaneComponent() = default;

SteeringSequence StayWithinLaneComponent::CalculateSteering() {
    return SteeringSequence();
}

void StayWithinLaneComponent::CalibrateSensors() {

}