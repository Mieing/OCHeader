@class _TtC13DanceUILottie19CompatibleAnimation, _TtC13DanceUILottie32CompatibleDictionaryTextProvider;

@interface DanceUILottie.CompatibleAnimationView : UIView {
    void /* unknown type, empty encoding */ animationView;
}

@property (nonatomic, retain) _TtC13DanceUILottie19CompatibleAnimation *compatibleAnimation;
@property (nonatomic) double loopAnimationCount;
@property (nonatomic, retain) _TtC13DanceUILottie32CompatibleDictionaryTextProvider *compatibleDictionaryTextProvider;
@property (nonatomic) long long contentMode;
@property (nonatomic) BOOL shouldRasterizeWhenIdle;
@property (nonatomic) double currentProgress;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double currentTime;
@property (nonatomic) double currentFrame;
@property (nonatomic, readonly) double realtimeAnimationFrame;
@property (nonatomic, readonly) double realtimeAnimationProgress;
@property (nonatomic) double animationSpeed;
@property (nonatomic) BOOL respectAnimationFrameRate;
@property (nonatomic, readonly) BOOL isAnimationPlaying;
@property (nonatomic) long long backgroundMode;

- (id)initWithCompatibleAnimation:(id)a0 compatibleRenderingEngineOption:(long long)a1;
- (id)initWithUrl:(id)a0 compatibleRenderingEngineOption:(long long)a1;
- (id)initWithData:(id)a0 compatibleRenderingEngineOption:(long long)a1;
- (id)initWithCompatibleAnimation:(id)a0;
- (void)playFromProgress:(double)a0 toProgress:(double)a1 completion:(id /* block */)a2;
- (void)playFromFrame:(double)a0 toFrame:(double)a1 completion:(id /* block */)a2;
- (void)playFromMarker:(id)a0 toMarker:(id)a1 completion:(id /* block */)a2;
- (void)playWithMarker:(id)a0 completion:(id /* block */)a1;
- (void)forceDisplayUpdate;
- (id)getValueFor:(id)a0 atFrame:(double)a1;
- (void)logHierarchyKeypaths;
- (void)setColorValue:(id)a0 forKeypath:(id)a1;
- (id)getColorValueFor:(id)a0 atFrame:(double)a1;
- (void)addSubview:(id)a0 forLayerAt:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toLayerAt:(id)a1;
- (struct CGPoint { double x0; double x1; })convertWithPoint:(struct CGPoint { double x0; double x1; })a0 toLayerAt:(id)a1;
- (double)progressTimeForMarker:(id)a0;
- (double)frameTimeForMarker:(id)a0;
- (double)durationFrameTimeForMarker:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithData:(id)a0;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)playWithCompletion:(id /* block */)a0;
- (id)initWithUrl:(id)a0;
- (void)reloadImages;

@end
