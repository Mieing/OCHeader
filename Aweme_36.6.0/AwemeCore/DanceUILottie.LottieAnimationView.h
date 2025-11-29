@class NSString;

@interface DanceUILottie.LottieAnimationView : DanceUILottie.LottieAnimationViewBase {
    void /* unknown type, empty encoding */ animateLayoutChangesWithCurrentCoreAnimationContext;
    void /* unknown type, empty encoding */ animationLoaded;
    void /* unknown type, empty encoding */ viewportFrame;
    void /* unknown type, empty encoding */ lottieAnimationLayer;
    void /* function */ animationName;
    void /* unknown type, empty encoding */ waitingToPlayAnimation;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *animationName;

- (void)animationWillMoveToBackground;
- (void)animationWillEnterForeground;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
