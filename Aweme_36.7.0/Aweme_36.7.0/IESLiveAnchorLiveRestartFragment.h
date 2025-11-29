@class NSString, HTSLiveToolbarItem, IESLiveCountTimer, IESLiveGCDTimer;
@protocol IESLiveAnchorScreencastLiveRestartService, IESLiveAnchorLiveRestartService;

@interface IESLiveAnchorLiveRestartFragment : IESLiveRoomComponent <IESLiveAnchorRestartActions, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) HTSLiveToolbarItem *restartToolBarItem;
@property (nonatomic) long long currentThermalState;
@property (retain, nonatomic) IESLiveCountTimer *notificationStartTimer;
@property (retain, nonatomic) IESLiveGCDTimer *perfTempTimer;
@property (nonatomic) BOOL isToolBarBubbleGuideShowed;
@property (retain, nonatomic) id<IESLiveAnchorLiveRestartService> restartService;
@property (retain, nonatomic) id<IESLiveAnchorScreencastLiveRestartService> screencastRestartService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)stopAnchorLive;
- (void)restartLiveWithSource:(long long)a0;
- (void)loadRestartToolBarItem;
- (void)showRestartToolBarBubbleGuideIfNeed;
- (void)registerNotificationIfNeed;
- (void)perfSamplerActiveFeatureIfNeed;
- (BOOL)liveRoomSceneScreenshotRestartEnable;
- (void)stopPerfTempTimer;
- (void)deregisterNotification;
- (void)perfSamplerDeactiveFeature;
- (BOOL)isLiveRoomSceneScreenshot;
- (BOOL)shouldShowPushView;
- (void)onAnchorThermalStateDidChanged;
- (void)onAnchorMemoryWarning;
- (void)onRestartToolBarItemTapped;
- (void)trackRestartItemShow;
- (void)trackRestartItemClick;
- (id)alertDesc;
- (void)didSelectedRestartButton;
- (void)trackAlertViewClickWithType:(id)a0;
- (void)trackAlertViewShow;
- (void)trackPushViewClickWithSource:(long long)a0;
- (BOOL)shouldShowRestartGuide;
- (void)recordRestartGuideHasShowed;
- (void)trackGuideBubbleShow;
- (BOOL)isLiveVisibleScopeTryLive;
- (void)startPerfTempTimer;
- (void)recordPushViewHasShowed;
- (void)trackPushViewShowWithType:(id)a0;
- (void).cxx_destruct;
- (id)alertTitle;

@end
