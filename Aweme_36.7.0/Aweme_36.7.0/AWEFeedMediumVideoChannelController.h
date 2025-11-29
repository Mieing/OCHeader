@class NSString, UIViewController;
@protocol AWEMVChannelViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEHPChannelControllerConfigProtocol;

@interface AWEFeedMediumVideoChannelController : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol, AWENearbyTabForwardAblityProtocol, AWEDigitalWellbeingMessage, AWEHPChannelControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEMVChannelViewControllerProtocol> *contentVC;
@property (nonatomic) double lastLeaveChannelTime;
@property (nonatomic) long long enterType;
@property (nonatomic) BOOL viewDidAppear;
@property (nonatomic) long long firstEnterType;
@property (nonatomic) long long firstLeaveType;
@property (nonatomic) double enterTime;
@property (nonatomic) double stayDuration;
@property (nonatomic) double returnChannelDuration;
@property (nonatomic) BOOL shouldRefreshCausedByTeenModeChange;
@property (nonatomic) BOOL canShowBubble;
@property (nonatomic) BOOL didFetchNextLandingData;
@property (nonatomic) BOOL appResignActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)enterFrom;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (id)aAWEPadModuleAdapter;
- (void)appWillTerminate;
- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)a0;
- (BOOL)channelRefreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (void)channelTopTabContainerDidAppear;
- (void)setupNotification;
- (id)aAWEPadBizUIAdapter;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (void)channelLandingTabWithModel:(id)a0;
- (BOOL)showTopTabRefreshAnimationWithModel:(id)a0;
- (unsigned long long)channelRefreshGestureRecognizerDirection:(id)a0;
- (void)channelAppWillResignActive;
- (void)channelDidBecomeActive;
- (BOOL)channelAllowCommonPinTopStrategy;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (void)onAWEMainNeedPersonalRecommendChangedNotification:(id)a0;
- (void)showBubbleIfNeed;
- (void)recordStayDuration;
- (void)recordEnterTime;
- (BOOL)shouldExecuteAutoRefresh;
- (void)executeAutoRefreshWithCompletion:(id /* block */)a0;
- (void)recordLeaveTime;
- (void)tabShowPinTopComponentWithComponentID:(id)a0 componentText:(id)a1 extraTrackParams:(id)a2 completion:(id /* block */)a3;
- (BOOL)isExistUnconsumedColdLaunchInsertJson;
- (void)onLeaveJXDebarPage:(id)a0;
- (void)setupDesktopGuide;
- (void)nextLandingResultChange:(id)a0;
- (void)updateLandingRecord:(double)a0;
- (BOOL)enableNextLandingPreRequest;
- (void)fetchDataForNextLandingIfNeeded;
- (void)recordInsertJson:(id)a0 params:(id)a1;
- (void)showSnackBarWithSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)sceneType;

@end
