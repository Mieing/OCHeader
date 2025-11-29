@protocol AWELightTransitionAnimationDelegate;

@interface AWELightTransition : AWEPageSheetTransition

@property (weak, nonatomic) id<AWELightTransitionAnimationDelegate> lightDelegate;

- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;

@end
