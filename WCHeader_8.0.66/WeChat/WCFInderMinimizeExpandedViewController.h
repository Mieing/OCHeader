@class WCFinderMinimizeGestureAnimator;

@interface WCFInderMinimizeExpandedViewController : MMUIViewController

@property (retain, nonatomic) WCFinderMinimizeGestureAnimator *animator;

- (void)viewDidLoad;
- (id)mmNavigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;

@end
