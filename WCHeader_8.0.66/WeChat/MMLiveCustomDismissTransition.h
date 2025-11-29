@class NSString;

@interface MMLiveCustomDismissTransition : MMLiveCustomTransition <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)defaultAnimateTransitionDismissTopToDown:(id)a0;
- (void)animateTransition:(id)a0;

@end
