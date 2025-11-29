@class NSString;

@interface IESLiveFeedDrawerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatorForDismiss:(BOOL)a0;

- (void)performDismissAnimation:(id)a0;
- (void)performPresentAnimation:(id)a0;
- (void)timingFunctionAnimations:(id /* block */)a0 comletion:(id /* block */)a1 with:(id)a2;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
