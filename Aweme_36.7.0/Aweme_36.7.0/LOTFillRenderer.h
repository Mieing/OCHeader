@class CALayer, LOTNumberInterpolator, LOTColorInterpolator;

@interface LOTFillRenderer : LOTRenderNode {
    LOTColorInterpolator *colorInterpolator_;
    LOTNumberInterpolator *opacityInterpolator_;
    BOOL _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapeFill:(id)a1;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;

@end
