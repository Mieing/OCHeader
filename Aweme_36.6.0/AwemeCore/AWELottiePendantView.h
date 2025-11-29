@class LOTAnimationView;

@interface AWELottiePendantView : AWEPendantView

@property (readonly, nonatomic) LOTAnimationView *foldedView;
@property (readonly, nonatomic) LOTAnimationView *expandedView;

- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 foldedLottie:(id)a1 expandedLottie:(id)a2;
- (void)playAnimationWithType:(unsigned long long)a0;
- (id)addLottieViewWithLottie:(id)a0 expanded:(BOOL)a1;
- (void)switchPlayingLottieViewWithFolded:(BOOL)a0;
- (void)performFoldingAnimation;
- (void)performExpandingAnimation;
- (void)animateWithDuration:(double)a0 timingFunction:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)resumePlayAnimation;
- (id)startFrameWithAnimationType:(unsigned long long)a0;
- (id)endFrameWithAnimationType:(unsigned long long)a0;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;

@end
