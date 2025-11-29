@class UIViewController, NSString, AWETimingCloseAction, AWEForceAlertCallbackWrapper, AWEForceAlertContext, AWETimingCloseAlertViewController;

@interface AWETimingCloseAlertManager : NSObject <AWETimingCloseAlertViewControllerDelegate, AWEAlertProtocol, AWEAntiAddictLogProtocol, AWEForceAlertProtocol>

@property (nonatomic) BOOL didAppear;
@property (copy, nonatomic) NSString *topViewControllerBeforeAlert;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWETimingCloseAlertViewController *alertVC;
@property (retain, nonatomic) UIViewController *bgDummyVC;
@property (weak, nonatomic) AWETimingCloseAction *timingCloseAction;
@property (nonatomic) BOOL dismissing;
@property (retain, nonatomic) AWEForceAlertCallbackWrapper *callbackWrapper;
@property (retain, nonatomic) AWEForceAlertContext *alertContext;
@property (nonatomic) BOOL needRemoveAlertWhenBackToForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)moduleName;

- (void)showWithCloseCallback:(id /* block */)a0;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)cancelButtonDidClick;
- (void)registerTimingCloseAction:(id)a0;
- (BOOL)timeCloseForceAlertEnable;
- (void)presentOnLivePlaying;
- (void)presentOnNormalScene;
- (void)p_presentOverFullScreenViewController;
- (void)dismissCurrentSheetIfNeedWithTopViewController:(id)a0 completion:(id /* block */)a1;
- (id)calculateEnterFrom;
- (void)p_onCloseWithCloseType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)trackClickEventWithClickType:(unsigned long long)a0;
- (void)p_onCloseWithCompletion:(id /* block */)a0;
- (void)resetStatusAfterAlertDismiss;
- (void)closeWithCloseType:(unsigned long long)a0;
- (void)trackCloseEventWithCloseType:(unsigned long long)a0;
- (void)callbackAfterAlertClose;
- (void)closeWithShowed:(BOOL)a0;
- (void)onAppDidBecomeActiveFromResign;
- (BOOL)isPresentedOnListenFeed;
- (void)p_removeBgDummyViewController;
- (void)repeatButtonDidClick;
- (void)dismissViewDidClick;
- (void)timingCloseAlertBeDismissed;
- (id)forceAlertIDForEvent:(id)a0;
- (unsigned long long)forceAlertViewStyleForEvent:(id)a0;
- (void)forceShowWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)forceDismissWithCallTrace:(id)a0;
- (void)dropPendingAlertIfNeeded;
- (BOOL)showAlertIfNeeded;
- (void)presentBgDummyViewController;
- (void)onAppDidBecomeActiveFromBackground;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (BOOL)isShowingAlert;

@end
