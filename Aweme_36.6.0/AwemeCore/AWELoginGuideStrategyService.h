@class NSString, AWELoginStrategyModel;

@interface AWELoginGuideStrategyService : HTSService <AWELoginGuideStrategyService>

@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) AWELoginStrategyModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINSSAdapterClass;

- (BOOL)needRequestServer;
- (id)sceneNameOfScene:(id)a0;
- (id)methodNameOfMethodType:(long long)a0;
- (id)sceneNameOfSceneType:(long long)a0;
- (BOOL)hasResponseOfLoginScene:(id)a0;
- (id)loginStrategyOfScene:(id)a0;
- (BOOL)shouldResetLoginPeriodLoginScene:(id)a0 lastTime:(id)a1;
- (BOOL)isLastShowTimeSatisfiedLoginScene:(id)a0 lastTime:(id)a1;
- (long long)frequencyIntervalOfLoginScene:(id)a0;
- (BOOL)shouldResetNewPeriodWhenLogout:(id)a0;
- (id)canShowLoginScene:(id)a0;
- (void)recordShowLoginScene:(id)a0;
- (void)recordSkipLoginScene:(id)a0;
- (void)updateSkipDateLoginScene:(id)a0 date:(id)a1;
- (void)resetSkipLoginScene:(id)a0;
- (void)recordFailLoginScene:(id)a0;
- (void)updateFailDateLoginScene:(id)a0 date:(id)a1;
- (void)resetFailLoginScene:(id)a0;
- (void)resetNewPeriodLoginScene:(id)a0;
- (void)resetPeriodShowCountLoginScene:(id)a0;
- (void)requestDataIfNeed;
- (void)networkingReachabilityDidChange;
- (long long)nowShowCountInDayInterval:(long long)a0 showDateList:(id)a1 regulateHour:(long long)a2;
- (long long)nowShowCountInSecondInterval:(long long)a0 showDateList:(id)a1;
- (void)readStorageModel;
- (id)aAWEUserModuleServiceDOUYINSSAdapter;
- (void)DOUYINSSLoadLocalData;
- (id)sceneTypeMap;
- (id)methodTypeMap;
- (id)loginStrategyOfSceneType:(long long)a0 methodType:(long long)a1;
- (BOOL)shouldResetNewPeriodAndShowSceneType:(long long)a0 methodType:(long long)a1 lastTime:(id)a2;
- (void)logForSceneType:(long long)a0 methodType:(long long)a1 message:(id)a2;
- (long long)frequencyIntervalOfLoginSceneType:(long long)a0 methodType:(long long)a1;
- (BOOL)shouldResetNewPeriodWhenLogoutSceneType:(long long)a0 methodType:(long long)a1;
- (void)isSceneAvoid:(id)a0 strategy:(id)a1 result:(id)a2;
- (void)isSkipReleaseStrategySatisfied:(id)a0 strategy:(id)a1 result:(id)a2;
- (void)isFailReleaseStrategySatisfied:(id)a0 strategy:(id)a1 result:(id)a2;
- (void)isMostLaunchTimeSatisfied:(id)a0 strategy:(id)a1 result:(id)a2;
- (void)isFrequencyStrategySatisfied:(id)a0 strategy:(id)a1 result:(id)a2;
- (void)logForStorage:(id)a0 message:(id)a1;
- (void)storeRequestResult:(id)a0;
- (BOOL)isNowSatisfiedTimeInterval:(long long)a0 withLastTime:(id)a1 regulateHour:(long long)a2;
- (id)loginStorageOfSceneName:(id)a0 methodType:(long long)a1;
- (BOOL)isFindFriendScene:(long long)a0;
- (void)isPeriodShowCountSatisfied:(id)a0 strategy:(id)a1 result:(id)a2;
- (long long)showCountInRangeInterval:(id)a0 strategy:(id)a1;
- (void).cxx_destruct;
- (void)startup;
- (void)dealloc;

@end
