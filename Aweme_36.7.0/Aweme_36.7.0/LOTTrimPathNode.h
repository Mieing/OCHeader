@class LOTNumberInterpolator;

@interface LOTTrimPathNode : LOTAnimatorNode {
    LOTNumberInterpolator *_startInterpolator;
    LOTNumberInterpolator *_endInterpolator;
    LOTNumberInterpolator *_offsetInterpolator;
    double _startT;
    double _endT;
    double _offsetT;
}

- (BOOL)updateWithFrame:(id)a0 withModifierBlock:(id /* block */)a1 forceLocalUpdate:(BOOL)a2;
- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)a0 trimPath:(id)a1;
- (void).cxx_destruct;
- (id)localPath;
- (id)outputPath;

@end
