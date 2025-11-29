@class NSMutableDictionary, NSString, NSDictionary, IESLLLiveShelfViewModel, UIViewController;
@protocol IESLLLiveShelfVC;

@interface IESLLLiveShelfCacheManager : NSObject <IESLLLiveShelfCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) double ageLimit;
@property (nonatomic) long long randomTime;
@property (nonatomic) long long firstAggDelayTime;
@property (retain, nonatomic) IESLLLiveShelfViewModel *viewModel;
@property (nonatomic) long long limitTimes;
@property (nonatomic) long long limitSec;
@property (nonatomic) long long retryTimes;
@property (nonatomic) double lastFuseTime;
@property (nonatomic) BOOL isFirstRequesting;
@property (copy, nonatomic) NSString *currentCacheKey;
@property (nonatomic) double startCacheTime;
@property (nonatomic) BOOL isAutoOpenShelfRequesting;
@property (weak, nonatomic) UIViewController<IESLLLiveShelfVC> *shelfVC;
@property (copy, nonatomic) id /* block */ getShelfVisibleBlock;
@property (copy, nonatomic) id /* block */ getTrafficLevelBlock;
@property (retain, nonatomic) NSDictionary *commonTrackerParameter;
@property (copy, nonatomic) id /* block */ shelfPrefetchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackerWithEvent:(id)a0 params:(id)a1;
- (void)startAutoOpenShelfPrefetch:(id)a0;
- (void)finishAutoOpenShelfPrefetch:(id)a0 withError:(id)a1;
- (id)cacheTrackParamsWithShelfModel:(id)a0;
- (id)fetchFirstAggDelayTime;
- (void)updateCacheAgeLimit:(long long)a0 randomTime:(long long)a1;
- (void)updateDataCacheIfNeededWithShelfModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableShelfPreProcess;
- (void)verifyCacheData;
- (void)liveLifePerformanceNetRequestWithError:(id)a0 time:(long long)a1 duration:(double)a2 model:(id)a3;
- (void)preProcessCacheData:(id)a0;
- (void)preRenderCacheData:(id)a0 cacheData:(id)a1;
- (void)updateCacheData:(id)a0 withKey:(id)a1;
- (id)cacheDataWithKey:(id)a0 error:(id *)a1;
- (BOOL)canWaitCacheRequesting:(id)a0;
- (void)checkCancelCacheRequest;
- (BOOL)getApiNeedRetry;
- (void)addRetryTimes;
- (long long)getRetryTimes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
