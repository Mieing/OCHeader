@class LOTShapePath, LOTPathInterpolator;

@interface LOTPathAnimator : LOTAnimatorNode {
    LOTShapePath *_pathConent;
    LOTPathInterpolator *_interpolator;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapePath:(id)a1;
- (void).cxx_destruct;

@end
