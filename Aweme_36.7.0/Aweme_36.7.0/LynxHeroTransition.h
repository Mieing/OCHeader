@class ShareElementPair, NSString, LynxHeroAnimator, NSMapTable, UIView, NSMutableArray, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface LynxHeroTransition : NSObject <UIViewControllerTransitioningDelegate, UITabBarControllerDelegate, UINavigationControllerDelegate, UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, LynxHeroAnimatorDelegate> {
    LynxHeroAnimator *_heroAnimator;
    NSMutableArray *_toViewsWithSharedElements;
    NSMutableArray *_fromViewsWithSharedElements;
    NSMutableArray *_viewsWithEnterTransition;
    NSMutableArray *_viewsWithExitTransition;
    NSMapTable *_enterTransitionMap;
    NSMapTable *_exitTransitionMap;
    NSMapTable *_pauseTransitionMap;
    NSMapTable *_resumeTransitionMap;
    NSMapTable *_sharedElementsMap;
    NSMapTable *_sharedElementsViewMap;
    ShareElementPair *pair;
}

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) UIViewController *toViewController;
@property (readonly, weak, nonatomic) UIViewController *fromViewController;
@property (readonly, nonatomic) BOOL isInNavigationController;
@property (readonly, nonatomic) BOOL isPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

+ (id)sharedInstance;

- (void)executeExitTransition:(id)a0 finishCallback:(id /* block */)a1;
- (void)executePauseTransition:(id)a0;
- (void)applySharedElementEnter:(id)a0 LynxUI:(id)a1;
- (void)applySharedElementExit:(id)a0 LynxUI:(id)a1;
- (void)removeFromTransitionMap:(id)a0 LynxView:(id)a1;
- (id)getSharedElementByTag:(id)a0 LynxUI:(id)a1;
- (void)startAnimatorWithDuration:(double)a0;
- (void)prepareTransitionContainer;
- (void)findViewWithSharedElements:(id)a0 toDictionary:(id)a1;
- (void)findViewWithEnterTransition:(id)a0 toArray:(id)a1;
- (void)findViewWithExitTransition:(id)a0 toArray:(id)a1;
- (void)registerEnterTransition:(id)a0 anim:(id)a1;
- (void)unregisterEnterTransition:(id)a0;
- (void)executeEnterTransition:(id)a0;
- (void)registerExitTransition:(id)a0 anim:(id)a1;
- (void)unregisterExitTransition:(id)a0;
- (void)registerPauseTransition:(id)a0 anim:(id)a1;
- (void)unregisterPauseTransiiton:(id)a0;
- (void)registerResumeTransition:(id)a0 anim:(id)a1;
- (void)unregisterResumeTransiiton:(id)a0;
- (void)registerSharedElementsUI:(id)a0 shareTag:(id)a1;
- (void)registerSharedElements:(id)a0 shareTag:(id)a1;
- (void)unregisterSharedElementsUI:(id)a0;
- (void)unregisterLynxView:(id)a0;
- (void)executeResumeTransition:(id)a0;
- (BOOL)findViewsWithTransition;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)interactionControllerForPresentation:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)updateProgress:(double)a0;
- (void)complete:(BOOL)a0;
- (void)animateTransition;

@end
