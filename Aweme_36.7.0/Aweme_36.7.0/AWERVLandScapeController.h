@class NSString;

@interface AWERVLandScapeController : AWERVBaseController <AWERVLandScapeControllerProtocol, AWELandscapeTransitionOuterContextProvider>

@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL isShowingKeyBoard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadLongVideoPlayerAdapterClass;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (void)beginMonitor;
- (void)endMonitor;
- (id)screenCastControlView;
- (void)addNotifications;
- (void)handleKeyboardDidHideNotification:(id)a0;
- (void)handleKeyboardWillShowNotification:(id)a0;
- (void)updateScreenCastViewLayout:(id)a0;
- (id)landscapeTransitionContext;
- (void)willExitLandscapeWithModel:(id)a0 modelList:(id)a1;
- (void)didExitLandscapeWithFromContext:(id)a0;
- (id)videoPlayerContainerView;
- (long long)preferVideoScaleMode;
- (BOOL)needScreenCastViewFillClipContainer;
- (unsigned long long)canAutoRotate;
- (void)autoEnterLandscapeFeedIfNeeded;
- (void)willEnterFullScreenWithEnterMethod:(id)a0;
- (id)aAWEPadLongVideoPlayerAdapter;
- (void)viewDidAppearAfter;
- (void)didRefreshWithAwemeModel:(id)a0;
- (BOOL)canMonitorOrientation;
- (BOOL)isLandscapeVideo;
- (void)trackRotateLandscapeScreen:(unsigned long long)a0;
- (id)preViewController;
- (void)orientationChanged:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear;

@end
