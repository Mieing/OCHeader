@class MMLiveViewController, NSMutableDictionary, NSArray, MMLiveTaskId, NSMutableSet, NSString, WCLiveBlurPowerModeAdjustParam;

@interface WCLiveBlurBtnPowerModeMonitorLogic : NSObject <MMLiveTaskMgrExt, MMLiveViewExt, IExptServiceExt>

@property (nonatomic) unsigned long long blurPowerModeSwitch;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveViewController *rootLiveVC;
@property (retain, nonatomic) NSMutableDictionary *monitorTaskDict;
@property (retain, nonatomic) NSMutableSet *snapShotPendingTaskSet;
@property (retain, nonatomic) NSMutableDictionary *suspendMonitorTaskDict;
@property (nonatomic) BOOL isMonitering;
@property (readonly, nonatomic) double monitorScheduleTime;
@property (nonatomic) unsigned long long monitorId;
@property (retain, nonatomic) NSArray *adjustStrategyParamList;
@property (retain, nonatomic) NSArray *adjustStrategyParamLevelList;
@property (nonatomic) long long defaultAdjustStrategyParamLevel;
@property (nonatomic) long long currentAdjustStrategyParamLevel;
@property (readonly, nonatomic) WCLiveBlurPowerModeAdjustParam *currentAdjustStrategyParam;
@property (readonly, nonatomic) unsigned long long currMonitorTaskCnt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initDefaultData;
- (void)registerPowerModeMonitorForBlurBtn:(id)a0;
- (void)unRegisterPowerModeMonitorForBlurBtn:(id)a0;
- (BOOL)hasBlurBtnRegisterPowerModeMonitor;
- (BOOL)isSupportBlurBtnPowerMode;
- (id)createMonitorTaskWithBlurBtn:(id)a0;
- (BOOL)checkBlurBackHostViewValid;
- (BOOL)checkBlurBackHostViewValidForMonitorTask:(id)a0;
- (BOOL)isMonitorTaskEnableActive:(id)a0;
- (void)increaseMonitorId;
- (void)handleMonitorTask:(id)a0 forStateChanged:(unsigned long long)a1;
- (void)checkAndUpdateAllMonitorTasksStateIfNeeded:(unsigned long long)a0;
- (void)changeAdjustStrategyParamLevel:(long long)a0;
- (void)updateBlurPowerModeSwitch;
- (void)closeBlurPowerModeMonitorService;
- (void)checkMonitorTaskDictIsEmpty;
- (void)startMonitor;
- (void)stopMonitor;
- (void)monitorPixelColor;
- (void)handleRequestARGBColorCallbackInMainThread:(unsigned long long)a0 pixelColorInfo:(id)a1;
- (void)onMonitorDone:(BOOL)a0 result:(id)a1 monitorId:(unsigned long long)a2;
- (void)continueMonitor;
- (void)checkSnapShotPendingTaskSetIsEmpty;
- (void)onMonitorTaskWillPendingToSnapShot:(id)a0;
- (void)onMonitorTaskPendingToSnapShot:(id)a0;
- (void)pendingToSnapShot;
- (void)cancelSnapShot;
- (void)catchSnapShot;
- (BOOL)checkEnableCatchSnapShot;
- (void)endCatchSnapShot:(BOOL)a0 snapShot:(id)a1;
- (void)onMinimizeWindowAttachLiveView:(id)a0;
- (void)onHomePageBottomPlayerAttachLiveView:(id)a0;
- (void)onLiveTask:(id)a0 isPureAudioModeChangedTo:(BOOL)a1 isPureAudioDisplayModeValueChanged:(BOOL)a2 showTip:(BOOL)a3;
- (void)onLiveTask:(id)a0 isAudienceLocalAudioModeChangedTo:(BOOL)a1 isPureAudioDisplayModeValueChanged:(BOOL)a2;
- (void)onLiveTask:(id)a0 liveViewConnectMicStateChanged:(BOOL)a1;
- (void)onLiveTaskAnchorAudioModeBackgroundPlayerVMChanged:(id)a0;
- (void)onLiveViewMainVideoViewFrameChanged:(id)a0 newVideoViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end
