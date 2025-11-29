@class WCFinderMinimizeFloatingView, NSString, UIView, UIViewController;
@protocol WCFinderMinimizeTransitioningDelegate;

@interface WCFinderMinimizeTransitioning : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<WCFinderMinimizeTransitioningDelegate> delegate;
@property (retain, nonatomic) UIView *floatingOutter;
@property (retain, nonatomic) WCFinderMinimizeFloatingView *floatingView;
@property (nonatomic) BOOL useWhenVCPop;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;
@property (nonatomic) BOOL isMinimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (double)animationDuration;
- (void)animateTransition:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
