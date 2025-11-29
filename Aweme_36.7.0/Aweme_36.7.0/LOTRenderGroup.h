@class LOTNumberInterpolator, LOTTransformInterpolator, LOTBezierPath, CALayer, LOTAnimatorNode;

@interface LOTRenderGroup : LOTRenderNode {
    LOTAnimatorNode *_rootNode;
    LOTBezierPath *_outputPath;
    LOTBezierPath *_localPath;
    BOOL _rootNodeHasUpdate;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTTransformInterpolator *_transformInterpolator;
}

@property (readonly, nonatomic) CALayer *containerLayer;

- (void)setValueDelegate:(id)a0 forKeypath:(id)a1;
- (BOOL)updateWithFrame:(id)a0 withModifierBlock:(id /* block */)a1 forceLocalUpdate:(BOOL)a2;
- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void)setPathShouldCacheLengths:(BOOL)a0;
- (void)searchNodesForKeypath:(id)a0;
- (id)valueInterpolators;
- (void)buildContents:(id)a0;
- (id)initWithInputNode:(id)a0 contents:(id)a1 keyname:(id)a2;
- (void).cxx_destruct;
- (id)localPath;
- (id)outputPath;

@end
