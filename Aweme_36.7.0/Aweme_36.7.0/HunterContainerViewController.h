@class HunterContainerViewModel, NSString, NSDictionary, UIScreenEdgePanGestureRecognizer, HunterContext, UIViewController;
@protocol HunterViewControllerPageDelegate;

@interface HunterContainerViewController : UIViewController <HunterControllerProtocol, HunterViewControllerProtocol, BDXPageDelegate, UIGestureRecognizerDelegate>

@property (nonatomic) BOOL hasConfigRouterParams;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *blockBackGesture;
@property (retain, nonatomic) UIViewController *controller;
@property (retain, nonatomic) HunterContainerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HunterContext *context;
@property (weak, nonatomic) id<HunterViewControllerPageDelegate> pageDelegate;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)btd_attachObject:(id)a0 forKey:(id)a1;
- (id)btd_getAttachedObjectForKey:(id)a0;
- (void)setupWithParams:(id)a0;
- (BOOL)pageCustomClose:(id)a0;
- (void)blockBackAction:(id)a0;
- (void)captureScreenshotInDebug;
- (void)trackBeforeLoadExceptionIfNeed;
- (void)loadSchema:(id)a0 withParams:(id)a1;
- (void)handleBackPressAndSwipe:(id)a0;
- (void)setupPopupVCWithSchema:(id)a0 params:(id)a1;
- (void)setupFullPageVCWithSchema:(id)a0;
- (void)addDebugLabelForViewController:(id)a0 text:(id)a1;
- (id)__makeSetContainerMethod;
- (void)dismissIfNeed;
- (void)setDebugText:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
