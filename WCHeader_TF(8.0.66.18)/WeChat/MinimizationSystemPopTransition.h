@class NSString, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate, MinimizationNewTransitionDelegate;

@interface MinimizationSystemPopTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (weak, nonatomic) id<MinimizationNewTransitionDelegate> delegate;
@property (weak, nonatomic) id<MiniTaskTransitionAnimationDelegate> animationDelegate;
@property (nonatomic) BOOL isInteracting;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
