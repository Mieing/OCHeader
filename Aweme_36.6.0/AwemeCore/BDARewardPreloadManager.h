@class BDARewardCacheService, NSMutableDictionary;

@interface BDARewardPreloadManager : NSObject

@property (retain, nonatomic) BDARewardCacheService *cacheService;
@property (retain, nonatomic) NSMutableDictionary *stateDictionary;

+ (id)sharedInstance;

- (id)taskPickInfoWithKey:(id)a0;
- (id)fetchPreloadedRewardData:(id)a0 inScene:(unsigned long long)a1;
- (BOOL)hasPreloadedRewardData:(id)a0 inScene:(unsigned long long)a1;
- (unsigned long long)preloadedRewardDataState:(id)a0 inScene:(unsigned long long)a1;
- (void)setPreloadRewardDataState:(unsigned long long)a0 modelKey:(id)a1 inScene:(unsigned long long)a2;
- (void)handlePreloadData:(id)a0 model:(id)a1 deliverySend:(BOOL)a2 scene:(unsigned long long)a3 error:(id)a4;
- (void)removePreloadStateForKey:(id)a0 inScene:(id)a1;
- (void)preloadRewardData:(id)a0 deliverySend:(BOOL)a1 preferCache:(BOOL)a2 params:(id)a3 inScene:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)compensateSendWithModel:(id)a0 inScene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)removePreloadedRewardData:(id)a0 inScene:(unsigned long long)a1;
- (void)removePreloadedRewardDataInScene:(unsigned long long)a0;
- (void)removeAllPreloadedRewardData;
- (id)preloadedRewardDataExpirationDate:(id)a0 inScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
