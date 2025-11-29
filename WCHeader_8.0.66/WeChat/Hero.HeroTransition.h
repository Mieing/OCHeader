@interface Hero.HeroTransition : NSObject <UITabBarControllerDelegate, UINavigationControllerDelegate, UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ defaultAnimation;
    void /* unknown type, empty encoding */ containerColor;
    void /* unknown type, empty encoding */ isUserInteractionEnabled;
    void /* unknown type, empty encoding */ viewOrderingStrategy;
    void /* unknown type, empty encoding */ defaultAnimationDirectionStrategy;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isPresenting;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ transitionContainer;
    void /* unknown type, empty encoding */ completionCallback;
    void /* unknown type, empty encoding */ beginCallback;
    void /* unknown type, empty encoding */ processors;
    void /* unknown type, empty encoding */ animators;
    void /* unknown type, empty encoding */ plugins;
    void /* unknown type, empty encoding */ animatingFromViews;
    void /* unknown type, empty encoding */ animatingToViews;
    void /* unknown type, empty encoding */ toViewController;
    void /* unknown type, empty encoding */ fromViewController;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ progressUpdateObservers;
    void /* unknown type, empty encoding */ totalDuration;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressRunner;
    void /* unknown type, empty encoding */ transitionContext;
    void /* unknown type, empty encoding */ fullScreenSnapshot;
    void /* unknown type, empty encoding */ forceNotInteractive;
    void /* unknown type, empty encoding */ forceFinishing;
    void /* unknown type, empty encoding */ startingProgress;
    void /* unknown type, empty encoding */ inNavigationController;
    void /* unknown type, empty encoding */ inTabBarController;
}

@property (nonatomic, readonly) BOOL wantsInteractiveStart;

- (BOOL)tabBarController:(id)a0 shouldSelectViewController:(id)a1;
- (id)tabBarController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)tabBarController:(id)a0 animationControllerForTransitionFromViewController:(id)a1 toViewController:(id)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
