@class _TtC9AWELottie18AWELottieAnimation;

@interface AWELottie.ObjcLottieInternalView : LOTAnimationView <AWELottie.AWELottieView, LOTAnimationDelegate> {
    void /* unknown type, empty encoding */ _cacheAnimation;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, retain) _TtC9AWELottie18AWELottieAnimation *lottieAnimation;
@property (nonatomic) double customAnimationSpeed;
@property (nonatomic, readonly) BOOL isCurrentAnimationPlaying;

- (id)initWithModel:(id)a0 inBundle:(id)a1;
- (void)setColorProvider:(struct CGColor { } *)a0 for:(id)a1;
- (void)setNumberProvider:(double)a0 for:(id)a1;
- (void)setPointProvider:(struct CGPoint { double x0; double x1; })a0 for:(id)a1;
- (void)setSizeProvider:(struct CGSize { double x0; double x1; })a0 for:(id)a1;
- (void)setPathProvider:(const struct CGPath { } *)a0 for:(id)a1;
- (void)animationView:(id)a0 isDisplayingFrame:(float)a1;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (void)update:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
