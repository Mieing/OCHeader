@class LOTPointInterpolator, LOTNumberInterpolator;

@interface LOTPolygonAnimator : LOTAnimatorNode {
    LOTNumberInterpolator *_outerRadiusInterpolator;
    LOTNumberInterpolator *_outerRoundnessInterpolator;
    LOTPointInterpolator *_positionInterpolator;
    LOTNumberInterpolator *_pointsInterpolator;
    LOTNumberInterpolator *_rotationInterpolator;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapePolygon:(id)a1;
- (void).cxx_destruct;

@end
