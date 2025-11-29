@class NSString;

@interface IESLocalLifeNearbyBizService : HTSService <IESLocalLifeNearbyBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cityInfo;
+ (BOOL)isGrouponSaaS;
+ (void)manuallyRecordOnceWithKey:(id)a0;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2 recordManually:(BOOL)a3;
+ (id)getDefaultSchema;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:(unsigned long long)a0 timesEvery:(double)a1 secondsWithKey:(id)a2 recordManually:(BOOL)a3;
+ (BOOL)executeUpTo:(unsigned long long)a0 timesEvery:(double)a1 secondsWithKey:(id)a2 andAction:(id /* block */)a3;
+ (void)pauseNearbyVideoWithID:(id)a0 pause:(BOOL)a1;
+ (void)openCitySelectPanelWithParms:(id)a0 completion:(id /* block */)a1;
+ (id)abilityKeys;

- (id)trackInjectionWithEventName:(id)a0 context:(id)a1;
- (BOOL)isInGrouponTab;
- (id)searchCommonParamsWithLifeHomepageFreshType:(id)a0;
- (id)sharkContainer:(id)a0 initData:(id)a1 extraParams:(id)a2 isDarkMode:(BOOL)a3;
- (id)lifeFeedsPrefetch:(id)a0;
- (id)nearbyClientAIManager;
- (BOOL)lifeTabHasSmallLiveWindowWithPageType:(long long)a0;
- (void)triggerPackage:(id)a0 event:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)registerLocationMessageWithListener:(id)a0 handler:(id /* block */)a1;

@end
