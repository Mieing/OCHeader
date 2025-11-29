@class LOTNumberInterpolator, CALayer, CAReplicatorLayer, LOTTransformInterpolator;

@interface LOTRepeaterRenderer : LOTRenderNode {
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_copiesInterpolator;
    LOTNumberInterpolator *_offsetInterpolator;
    LOTNumberInterpolator *_startOpacityInterpolator;
    LOTNumberInterpolator *_endOpacityInterpolator;
    CALayer *_instanceLayer;
    CAReplicatorLayer *_replicatorLayer;
    CALayer *centerPoint_DEBUG;
}

- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 shapeRepeater:(id)a1;
- (void)recursivelyAddChildLayers:(id)a0;
- (void).cxx_destruct;

@end
