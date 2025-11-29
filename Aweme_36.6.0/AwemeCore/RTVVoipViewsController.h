@class NSString, UIWindow, RTVVoipViewControllerContext;
@protocol RxInjector, RTVXRSettingsInterface, RTVTopViewControllerInterface, RTVWindowProtocol, RTVVoipConfigureManagerInterface, RTVVoipModelStoreInterface, RTVVoipTrackerHelperInterface, RTVXRPresenterInterface, RTVSettingsManager;

@interface RTVVoipViewsController : NSObject <RTVVoipObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (retain, nonatomic) UIWindow<RTVWindowProtocol> *voipWindow;
@property (readonly, nonatomic) UIWindow *preKeyWindow;
@property (readonly, nonatomic) id<RTVTopViewControllerInterface> topViewControllerHelper;
@property (readonly, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (nonatomic) BOOL lastInPrepare;
@property (nonatomic) BOOL currentInPrepare;
@property (nonatomic) BOOL inRecall;
@property (weak, nonatomic) RTVVoipViewControllerContext *currentVoipContext;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (weak, nonatomic) id<RTVXRPresenterInterface> preloadEnginePresenter;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)changeDeviceOrientation:(long long)a0;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)voipViewIsNarrowVisible;
- (BOOL)isSwitchLayoutAnimating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentNarrowViewFrame;
- (BOOL)inPrepareOrRecall;
- (BOOL)voipVCIsVisible;
- (BOOL)inVoipRecordSession;
- (void)rtvWindowNeedHide:(BOOL)a0 needUpgradeWindowLevel:(BOOL)a1;
- (BOOL)switchToFullScreenIfNeeded;
- (id)currentVoipModel;
- (void)stopRecordSession;
- (id)dismissVoipViewController;
- (BOOL)isInitialNarrowVisibleWithVoip:(id)a0;
- (void)showVoipViewControllerWithVoip:(id)a0 context:(id)a1;
- (BOOL)isInRecallPage;
- (void)finishPreloadEngine;
- (void)preloadEngineWithVoip:(id)a0 context:(id)a1;
- (BOOL)isNeedRollToPrepareView;
- (void)switchToRecall;
- (void)__setupVoipContext:(id)a0;
- (void)__showViewControllerWithItem:(id)a0;
- (BOOL)__isFromChatPanelPlayGame:(unsigned long long)a0;
- (void).cxx_destruct;

@end
