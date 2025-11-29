@class LOTPointInterpolator, LOTNumberInterpolator;

@interface LOTPolystarAnimator : LOTAnimatorNode {
    LOTNumberInterpolator *_outerRadiusInterpolator;
    LOTNumberInterpolator *_innerRadiusInterpolator;
    LOTNumberInterpolator *_outerRoundnessInterpolator;
    LOTNumberInterpolator *_innerRoundnessInterpolator;
    LOTPointInterpolator *_positionInterpolator;
    LOTNumberInterpolator *_pointsInterpolator;
    LOTNumberInterpolator *_rotationInterpolator;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapeStar:(id)a1;
- (void).cxx_destruct;

@end
