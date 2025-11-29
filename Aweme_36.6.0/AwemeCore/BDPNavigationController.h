@class BDPDirectionPanGestureRecognizer, NSString, BDPUniqueID, BDPMultiDelegateProxy;
@protocol BDPNavigationRouteProtocol, BDPNavigationControllerGestureRecognizeBreaker;

@interface BDPNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) BDPDirectionPanGestureRecognizer *swipeBackGestureRecognizer;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPNavigationControllerGestureRecognizeBreaker> *gestureBreakDelegates;
@property (nonatomic) BOOL enableSwipeOptimize;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPNavigationRouteProtocol> navigationRouteDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)aweDisableFullscreenPopTransition;
- (void)setupObserver;
- (void)refreshOrientation;
- (void)setupSwipeBackGestureRecognizer;
- (void)onWindowHiddenNotify:(id)a0;
- (void)interactionGesturePopViewController:(id)a0 willShowViewController:(id)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)popViewControllerAnimated:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
