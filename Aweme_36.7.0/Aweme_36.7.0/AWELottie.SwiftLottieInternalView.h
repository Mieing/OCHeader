@class _TtC9AWELottie18AWELottieAnimation;

@interface AWELottie.SwiftLottieInternalView : DanceUILottie.LottieAnimationView <AWELottie.AWELottieView> {
    void /* unknown type, empty encoding */ _cacheAnimation;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ delegate;
    void /* function */ completionBlock;
}

@property (nonatomic, retain) _TtC9AWELottie18AWELottieAnimation *lottieAnimation;
@property (nonatomic) BOOL loopAnimation;
@property (nonatomic) BOOL autoReverseAnimation;
@property (nonatomic) unsigned long long repeatCount;
@property (nonatomic) double customAnimationSpeed;
@property (nonatomic) double animationProgress;
@property (nonatomic, readonly) BOOL isCurrentAnimationPlaying;
@property (nonatomic, copy) id /* block */ completionBlock;

- (void)setAnimationNamed:(id)a0 inBundle:(id)a1;
- (void)setAnimationFromJSON:(id)a0;
- (void)playToFrame:(id)a0 withCompletion:(id /* block */)a1;
- (void)playFromProgress:(double)a0 toProgress:(double)a1 withCompletion:(id /* block */)a2;
- (void)setAnimationFromJSON:(id)a0 inBundle:(id)a1;
- (void)setColorProvider:(struct CGColor { } *)a0 for:(id)a1;
- (void)setNumberProvider:(double)a0 for:(id)a1;
- (void)setPointProvider:(struct CGPoint { double x0; double x1; })a0 for:(id)a1;
- (void)setSizeProvider:(struct CGSize { double x0; double x1; })a0 for:(id)a1;
- (void)setPathProvider:(const struct CGPath { } *)a0 for:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)update:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)updateMetrics;
- (void)playWithCompletion:(id /* block */)a0;

@end
