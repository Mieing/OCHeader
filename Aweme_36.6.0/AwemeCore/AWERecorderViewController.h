@class AWEStudioIdleTimerHandler, NSString, NSObject, ACCRecordViewControllerInputData;
@protocol ACCInpsirationTransitionProtocol;

@interface AWERecorderViewController : ACCRecordViewController <AWETargetZoomContextOutterProviderProtocol, ACCZoomContextOutterProviderProtocol, AWEZoomTransitionOuterContextProvider, AWERecorderViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACCInpsirationTransitionProtocol> *inspirationTransitionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEStudioIdleTimerHandler *idleTimerHandler;
@property (nonatomic) BOOL hadTrackedViewWillAppear;
@property (nonatomic) BOOL hadTrackedViewDidAppear;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)awesst_enterFrom;
- (id)awesst_additionalTrackerParams;
- (void)onAppDidEnterBackground;
- (id)initWithBusinessConfiguration:(id)a0;
- (void)trackViewWillAppear;
- (void)trackViewDidLoad;
- (void)trackViewDidAppear;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (BOOL)routerAnimated;
- (void)popSelf;
- (id)handleTargetViewControllerInputData;
- (void)prepareForLoadComponent;
- (void)beforeLoadLazyComponent;
- (void)closeForWidget;
- (void)controllerTaskFinished;
- (id)targetZoomTransitionStartView;
- (void)switchToOnlyAllowPhotoRecordMode;
- (void)closeWithoutPopself;
- (void)resetShowFunctionToast:(BOOL)a0;
- (void)sendCloseMessgeTojsbWhenJsbOpenScanPageIfNeed:(BOOL)a0;
- (void)setupLoginWindowAppearanceNotification;
- (void)syncBindCoreRecommendTrack;
- (void)trackViewEventFor:(id)a0;
- (void)p_loginWindowDidBecomeKeyHandler:(id)a0;
- (void)p_loginWindowDidResignKeyHandler:(id)a0;
- (void)p_closeWithCloseBlock:(id /* block */)a0;
- (void)close;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
