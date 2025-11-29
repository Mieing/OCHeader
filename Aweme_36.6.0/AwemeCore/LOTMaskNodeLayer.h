@class LOTMask, LOTNumberInterpolator, LOTPathInterpolator;

@interface LOTMaskNodeLayer : CAShapeLayer {
    LOTPathInterpolator *_pathInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTNumberInterpolator *_expansionInterpolator;
}

@property (readonly, nonatomic) LOTMask *maskNode;

- (BOOL)hasUpdateForFrame:(id)a0;
- (void)updateForFrame:(id)a0 withViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (id)initWithMask:(id)a0;

@end
