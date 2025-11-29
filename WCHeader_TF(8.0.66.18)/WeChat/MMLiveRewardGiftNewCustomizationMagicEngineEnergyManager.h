@class NSString, MMLiveTaskId, NSMutableDictionary;

@interface MMLiveRewardGiftNewCustomizationMagicEngineEnergyManager : NSObject <MMLiveTaskMgrExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *energyAdjustTaskDict;
@property (nonatomic) unsigned int currFrameRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)initDefaultData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)monitorEnergyForRewardView:(id)a0;
- (void)cancelMonitorEnergy:(id)a0;
- (double)getAnimationInterval;
- (unsigned long long)getCurrentPowerMode;
- (void)onHasRewardViewMonitoredEnergy;
- (void)initSettingMagicFrameRate;
- (void)initSettingQuailtyLevelForEnergyTask:(id)a0;
- (void)initSettingPixelRatioForEnergyTask:(id)a0;
- (id)createEnergyAdjustTaskForRewardView:(id)a0;
- (id)getUniqueKeyForView:(id)a0;
- (id)getLiveTask;
- (long long)getQuailtyLevelWithMetricsInfo:(id)a0;
- (double)getPixelRatioWithMetricsInfo:(id)a0 forEnergyTask:(id)a1;
- (unsigned int)getFrameRateWithMetricsInfo:(id)a0;
- (id)getCurrentActiveAdjustTask;
- (unsigned long long)getCurrentPowerModeWithMetricsInfo:(id)a0;
- (void)onLiveTask:(id)a0 didCollectMetricsInfo:(id)a1;
- (void)updateQuailtyLevelWithMetericsInfo:(id)a0;
- (void)updateFrameRateWithMetricsInfo:(id)a0;
- (void).cxx_destruct;

@end
