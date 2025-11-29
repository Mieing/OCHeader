@class LOTNumberInterpolator, NSArray, NSDictionary, LOTAnimationView, CALayer, NSNumber, NSMutableDictionary;

@interface LOTCompositionContainer : LOTLayerContainer {
    NSNumber *_frameOffset;
    CALayer *DEBUG_Center;
    NSMutableDictionary *_keypathCache;
    LOTNumberInterpolator *_timeInterpolator;
}

@property (readonly, nonatomic) NSArray *childLayers;
@property (readonly, nonatomic) NSDictionary *childMap;
@property (nonatomic) long long asyncLoadingCount;
@property (weak, nonatomic) LOTAnimationView *referencedAnimationView;

- (void)setValueDelegate:(id)a0 forKeypath:(id)a1;
- (id)initWithModel:(id)a0 inLayerGroup:(id)a1 withLayerGroup:(id)a2 withAssestGroup:(id)a3;
- (id)keysForKeyPath:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toKeypathLayer:(id)a1 withParentLayer:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toKeypathLayer:(id)a1 withParentLayer:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromKeypathLayer:(id)a1 withParentLayer:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromKeypathLayer:(id)a1 withParentLayer:(id)a2;
- (void)addSublayer:(id)a0 toKeypathLayer:(id)a1;
- (void)maskSublayer:(id)a0 toKeypathLayer:(id)a1;
- (void)displayWithFrame:(id)a0 forceUpdate:(BOOL)a1;
- (void)setViewportBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchNodesForKeypath:(id)a0;
- (void)initializeWithChildGroup:(id)a0 withAssetGroup:(id)a1;
- (id)_layerForKeypath:(id)a0;
- (void)perf_analysis_displayWithFrame:(id)a0 forceUpdate:(BOOL)a1;
- (double)lastCheckHiddenTime;
- (void)setLastCheckHiddenTime:(double)a0;
- (double)lastCheckInScreenTime;
- (void)setLastCheckInScreenTime:(double)a0;
- (void).cxx_destruct;

@end
