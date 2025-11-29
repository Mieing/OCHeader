@class NSMutableSet;

@interface AWEPlayInteractionLiveExtendGuideManager : NSObject

@property (retain, nonatomic) NSMutableSet *liveExtendShowCount;
@property (nonatomic) long long disableShowTime;
@property (nonatomic) long long lastShowTime;

+ (id)shareInstance;

- (long long)notClickTimes;
- (BOOL)isLiveheadBtnOptimize;
- (BOOL)checkFrequencyControl;
- (void)recordShowWithoutClickWhenReset:(id)a0 extendType:(long long)a1;
- (BOOL)playerLoopTimingEnable;
- (BOOL)shouldShowForExtendType:(long long)a0;
- (void)recordShowWith:(id)a0 extendType:(long long)a1;
- (void)addExtendShowCount:(id)a0;
- (void)recordTapWith:(id)a0 extendType:(long long)a1;
- (void)cleanFrequency;
- (double)intervalMinutes;
- (double)notShowDays;
- (id)p_sceneConfigForExtendType:(long long)a0;
- (BOOL)p_sceneConfigEnable:(id)a0;
- (id)p_longTermRetreatEndTimeKeyForScene:(id)a0;
- (id)p_oneDayRetreatEndTimeKeyForScene:(id)a0;
- (id)p_continuousRetreatEndTimeKeyForScene:(id)a0;
- (id)p_lastShowTimeKeyForScene:(id)a0;
- (BOOL)handleOneDayNoClickRetreat:(id)a0 sceneType:(id)a1 extendType:(long long)a2 itemID:(id)a3;
- (void)p_increaseContinuousExitCountForScene:(id)a0 sceneConfig:(id)a1;
- (BOOL)handleContinuousNoClickRetreat:(id)a0 sceneType:(id)a1 extendType:(long long)a2 itemID:(id)a3;
- (id)p_dailyNoClickDateKeyForScene:(id)a0;
- (id)p_dailyNoClickItemIDsKeyForScene:(id)a0;
- (id)todayDateStr;
- (void)p_setStorageObject:(id)a0 forKey:(id)a1;
- (id)p_continuousNoClickItemIDsKeyForScene:(id)a0;
- (void)p_removeStorageObjectForKey:(id)a0;
- (id)p_continuousExitCountKeyForScene:(id)a0;
- (void)p_clearSceneRecordWhenExit:(id)a0;
- (id)p_sceneTypeForExtendType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
