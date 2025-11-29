@class NSString, UIDocumentMenuViewController, CJPayTransitionManager;

@interface CJPayNavigationController : UINavigationController <CJPayVCThemeProtocol, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isCustomPush;
@property (weak, nonatomic) UIDocumentMenuViewController *weakDocumentMenuVC;
@property (retain, nonatomic) CJPayTransitionManager *transitionManager;
@property (nonatomic) double cjpadPreferHeight;
@property (nonatomic) unsigned long long dismissAnimatedType;
@property (nonatomic) BOOL useNewHalfPageTransAnimation;
@property (nonatomic) BOOL isNeedDarkModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForRootVC:(id)a0;
+ (id)customPushNavigationVC;

- (BOOL)aweDisableFullscreenPopTransition;
- (id)transition_navigationProxyDelegate;
- (void)pushViewControllerSingleTop:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)currentThemeMode;
- (void)copyCurrentThemeModeTo:(id)a0;
- (void)p_removeVCsUnderVC:(id)a0;
- (BOOL)hasFullPageInNavi;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)shouldAutorotate;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleGesture:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
