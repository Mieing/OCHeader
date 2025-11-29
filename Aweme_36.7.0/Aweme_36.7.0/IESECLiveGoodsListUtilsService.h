@class NSMutableDictionary;
@protocol HTSKVStore;

@interface IESECLiveGoodsListUtilsService : IESECLiveGoodsListBaseServiceV2

@property (retain, nonatomic) NSMutableDictionary *peakReduceManager;
@property (retain, nonatomic) id<HTSKVStore> kvStore;

- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (id)p_recordKeyWithKey:(id)a0;
- (BOOL)checkGuideIfNeededWithKey:(id)a0;
- (id)getSingleGuideInfoWithKey:(id)a0;
- (void)updateGuideInfoWithDict:(id)a0 bizKey:(id)a1;
- (void)startDelayRequestShortWithKey:(id)a0 completion:(id /* block */)a1;
- (void)startDelayRequestWithKey:(id)a0 AndType:(id)a1 completion:(id /* block */)a2;
- (id)peakReduceForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
