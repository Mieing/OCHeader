@class NSString;

@interface WCFinderPullToExitAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, WCAudioSessionExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)startInteractiveTransition:(id)a0;

@end
