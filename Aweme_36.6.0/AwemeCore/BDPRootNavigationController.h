@class UIScreenEdgePanGestureRecognizer, NSString, NSArray, BDPNavigatingAnimation, BDPMultiDelegateProxy, UIPanGestureRecognizer, NSMutableArray, BDPTimorLaunchParam, NSNumber;
@protocol BDPNavigationControllerGestureRecognizeBreaker;

@interface BDPRootNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    BOOL _inIniting;
    UIPanGestureRecognizer *_panGesture;
    NSMutableArray *_unfoldConflictGestures;
}

@property (copy, nonatomic) NSArray *allGames;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popGesture;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPNavigationControllerGestureRecognizeBreaker> *gestureBreakDelegates;
@property (nonatomic) long long originStatusBarStyle;
@property (retain, nonatomic) BDPNavigatingAnimation *animation;
@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (readonly, copy, nonatomic) NSArray *allApps;
@property (retain, nonatomic) NSNumber *forceDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (unsigned long long)acc_stuioTag;
- (unsigned long long)acc_stuioTag;
- (void)updateStatusBarStyle:(BOOL)a0;
- (void)edgePanGesture:(id)a0;
- (id)initWithRootViewController:(id)a0 launchParam:(id)a1;
- (void)popGestureChanged:(id)a0;
- (void)updateStatusBarHidden:(BOOL)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)popViewControllerAnimated:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)shouldAutorotate;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)setTransitioningDelegate:(id)a0;

@end
