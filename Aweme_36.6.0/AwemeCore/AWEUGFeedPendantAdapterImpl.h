@class NSArray, NSDictionary, NSMutableSet, NSString;

@interface AWEUGFeedPendantAdapterImpl : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage, BDUGLuckyActivityDelegateProtocol, AWEUGPendantAdapterProtocol, AWEUGPendantSettingProtocol>

@property (nonatomic) long long currentSettingsVersion;
@property (nonatomic) BOOL needDowngrade;
@property (nonatomic) BOOL needAvoidCountdownActivity;
@property (nonatomic) BOOL needStopTimingTask;
@property (nonatomic) double lastPollingSettingsUpdateTimestamp;
@property (copy, nonatomic) NSArray *latestTimeLimitedActivitys;
@property (copy, nonatomic) NSDictionary *activitySettings;
@property (retain, nonatomic) NSMutableSet *registedActivitySet;
@property (copy, nonatomic) NSArray *activityStageResourceItems;
@property (nonatomic) BOOL timeCalibratorFail;
@property (nonatomic) double lastActivityStageChangeTimestamp;
@property (copy, nonatomic) NSDictionary *commonTrackingParamsForDynamicSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identify;
@property (nonatomic) long long pendantVersion;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)onActivityEnter:(id)a0 aheadTime:(long long)a1;
- (void)onActivityStop:(id)a0;
- (void)onActivityDataChanged:(id)a0 allData:(id)a1;
- (void)setupObservation;
- (void)monitorActivityStageTimeCalibratorFail:(id)a0;
- (void)monitorActivityStageChangeDataToActivityStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorActivityStageDataMatchMaterialFail:(unsigned long long)a0 params:(id)a1;
- (void)monitorDynamicSettingDataStatus:(unsigned long long)a0 params:(id)a1;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)cleanActivityPendantData;
- (void)updateModel:(id)a0 version:(long long)a1;
- (void)addValueFrom:(id)a0 withOldKey:(id)a1 to:(id)a2 withNewKey:(id)a3;
- (id)splitActivityFromRawData:(id)a0;
- (id)getActivityController;
- (void)clearTaskInfo;
- (void)didShowCountdownView:(id)a0;
- (void)didHiddenCountdownView:(id)a0;
- (BOOL)needDowngradeToPineapple;
- (void)pollingSettingsDidChange:(id)a0;
- (void)dealPollingSettingsWithData:(id)a0;
- (void)registerUGActivityStageDelegate;
- (void)updateSettingsFromLocalData;
- (id)activityPendantSettings;
- (void)handleDataWithSettings:(id)a0;
- (void)checkMaterialAndActivityChangeItemMap:(id)a0;
- (id)getActivityStageItemWithActivitiyName:(id)a0;
- (void)trackFeedPendantActivityStageLogWithMessage:(id)a0;
- (id)getTimeLimitedActivitySessionWithName:(id)a0;
- (void)monitorSplitActivityDataCompletedWithParams:(id)a0;
- (void)trackFeedPendantMultiStageManagerLogWithMessage:(id)a0;
- (BOOL)shouldNotAvoidCountDown;
- (void)monitorPollingSettingsChangeStatus:(unsigned long long)a0 params:(id)a1;
- (void)trackFeedPendantPollingSettingsLogWithMessage:(id)a0;
- (void)monitorDowngradeByPollingSettingsFPWithParams:(id)a0;
- (void)monitorDowngradeByPollingSettingsAPWithParams:(id)a0;
- (void)monitorLuckyDogActivityBlockStatusWithParams:(id)a0;
- (void)trackFeedPendantLuckyDogLogWithMessage:(id)a0;
- (void)monitorPollingSettingsBlockStatusWithParams:(id)a0;
- (void)monitorPollingSettingsActivityCidNotFoundWithParams:(id)a0;
- (void)monitorActivityStageChangedChangeStatus:(unsigned long long)a0 params:(id)a1;
- (BOOL)needMonitorActivityStageDataStatus;
- (void)dealActivityStageWithData:(id)a0 from:(long long)a1;
- (void)monitorLuckyDogActivityBlockInvokeWithParams:(id)a0;
- (void)handleTimeCalibratorUpdateIfNeed;
- (id)getCommonMonitorParams;
- (void)onActivityBlock:(id)a0 cycleID:(long long)a1 block:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
