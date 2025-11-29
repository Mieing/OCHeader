@class NSString;

@interface AWEIMSpeedUpModalTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isDismiss) BOOL dismiss;
@property (nonatomic) double transitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDismiss:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
