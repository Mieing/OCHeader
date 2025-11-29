@class LOTPointInterpolator, LOTNumberInterpolator;

@interface LOTRoundedRectAnimator : LOTAnimatorNode {
    LOTPointInterpolator *_centerInterpolator;
    LOTPointInterpolator *_sizeInterpolator;
    LOTNumberInterpolator *_cornerRadiusInterpolator;
    BOOL _reversed;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (void)addCorner:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 toPath:(id)a2 clockwise:(BOOL)a3;
- (id)initWithInputNode:(id)a0 shapeRectangle:(id)a1;
- (void).cxx_destruct;

@end
