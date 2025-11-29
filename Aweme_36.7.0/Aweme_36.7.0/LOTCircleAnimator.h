@class LOTPointInterpolator;

@interface LOTCircleAnimator : LOTAnimatorNode {
    LOTPointInterpolator *_centerInterpolator;
    LOTPointInterpolator *_sizeInterpolator;
    BOOL _reversed;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapeCircle:(id)a1;
- (void).cxx_destruct;

@end
