@class LOTArrayInterpolator, LOTRadialGradientLayer, CAShapeLayer, LOTNumberInterpolator, CALayer, LOTPointInterpolator;

@interface LOTGradientFillRender : LOTRenderNode {
    BOOL _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
    CAShapeLayer *_maskShape;
    LOTRadialGradientLayer *_gradientOpacityLayer;
    LOTRadialGradientLayer *_gradientLayer;
    long long _numberOfPositions;
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _endPoint;
    LOTArrayInterpolator *_gradientInterpolator;
    LOTPointInterpolator *_startPointInterpolator;
    LOTPointInterpolator *_endPointInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapeGradientFill:(id)a1;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;

@end
