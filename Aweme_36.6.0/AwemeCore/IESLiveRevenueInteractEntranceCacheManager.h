@class NSMutableDictionary, IESLiveCountTimer, NSDictionary, IESLiveRevenueInteractEntranceCache, NSString;
@protocol IESLiveRoomService;

@interface IESLiveRevenueInteractEntranceCacheManager : NSObject <IESLiveRevenueInteractInnerAction>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long repeatClickPredictionCount;
@property (nonatomic) BOOL willOpen;
@property (retain, nonatomic) IESLiveRevenueInteractEntranceCache *panelAllDataCache;
@property (retain, nonatomic) IESLiveRevenueInteractEntranceCache *panelOthersCache;
@property (retain, nonatomic) IESLiveRevenueInteractEntranceCache *panelFollowDataCache;
@property (retain, nonatomic) IESLiveRevenueInteractEntranceCache *panelRecommendDataCache;
@property (retain, nonatomic) IESLiveCountTimer *othersTimer;
@property (retain, nonatomic) IESLiveCountTimer *followTimer;
@property (retain, nonatomic) IESLiveCountTimer *recommendTimer;
@property (retain, nonatomic) NSMutableDictionary *hitCacheDic;
@property (nonatomic) long long predictionCount;
@property (nonatomic) long long predictionWillOpenCount;
@property (nonatomic) long long predictionCannotOpenCount;
@property (nonatomic) long long predictionWillOpenTrueCount;
@property (nonatomic) long long predictionCannotOpenTrueCount;
@property (readonly, copy, nonatomic) NSDictionary *cacheDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)startPredict;
- (id)getCacheDataWithType:(long long)a0;
- (void)addHitCacheData:(id)a0 dataType:(long long)a1;
- (void)updateCacheData:(id)a0 dataType:(long long)a1 sourceType:(long long)a2;
- (id)initWithDIContext:(id)a0 roomModel:(id)a1;
- (BOOL)pitayaStrategySwitch;
- (void)registerClientAIMessageHandler;
- (void)trackPredictResult;
- (void)calculatePredictAccuracy;
- (BOOL)clientAIStrategySwitch;
- (void)changePanelCacheMaintenanceStatus;
- (BOOL)cacheStrategySwitch;
- (id)scheduledUpdatesConfig;
- (void)performScheduledUpdateRepeatedly:(long long)a0 repeatTime:(long long)a1 dataType:(long long)a2 delayTime:(long long)a3 sourceType:(long long)a4;
- (void)saveCacheData:(id)a0 loadType:(long long)a1 sourceType:(long long)a2;
- (id)repeatClickPredictionConfig;
- (void)requestPanelDataWithType:(long long)a0;
- (void)cancelRepeatTimerWithType:(long long)a0;
- (void)startKeepLivePanelCacheWithType:(long long)a0 hasUseCacheData:(BOOL)a1;
- (void)cleanCacheDataWithType:(long long)a0;
- (void)requestBattleRivalsWithLastTabName:(id)a0 dataType:(long long)a1 sourceType:(long long)a2 completion:(id /* block */)a3;
- (id)clientAIStrategyConfig;
- (void)startPanelClientAICacheStrategy;
- (id)entranceCache:(long long)a0;
- (double)shelfLife:(long long)a0;
- (long long)cacheStrategyGracePeriod;
- (long long)cacheStrategyRepeatCount;
- (void)triggerCacheStrategyAtTime:(long long)a0;
- (id)dataReuseConfig;
- (id)cacheStrategyConfig;
- (id)improveDataQualityConfig;
- (void).cxx_destruct;
- (void)cleanTimer;
- (void)dealloc;
- (void)clean;

@end
