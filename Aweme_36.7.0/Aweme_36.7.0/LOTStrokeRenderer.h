@class NSArray, LOTNumberInterpolator, LOTColorInterpolator;

@interface LOTStrokeRenderer : LOTRenderNode {
    LOTColorInterpolator *_colorInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTNumberInterpolator *_widthInterpolator;
    LOTNumberInterpolator *_dashOffsetInterpolator;
    NSArray *_dashPatternInterpolators;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (id)actionsForRenderLayer;
- (void)_updateLineDashPatternsForFrame:(id)a0;
- (id)initWithInputNode:(id)a0 shapeStroke:(id)a1;
- (void).cxx_destruct;

@end
