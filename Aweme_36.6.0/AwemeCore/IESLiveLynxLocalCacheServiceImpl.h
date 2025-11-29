@class YYCache, NSString;
@protocol HTSKVStore;

@interface IESLiveLynxLocalCacheServiceImpl : NSObject <IESLiveLynxLocalCacheService>

@property (retain, nonatomic) YYCache *localCacheImpl;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (nonatomic) BOOL isInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1 validSeconds:(id)a2;
- (id)getCacheKeyWithOriginKey:(id)a0 routerParam:(id)a1;
- (BOOL)checkURLIsInAllowList:(id)a0 routerParam:(id)a1;
- (BOOL)enableLocalCache;
- (int)getMemoryCostLimit;
- (int)getCostLimit;
- (int)getDiskCostLimit;
- (BOOL)checkIsExpiredWithKey:(id)a0;
- (void)removeMetaDataWithKey:(id)a0;
- (void)updateMetaDataWithKey:(id)a0 validSeconds:(id)a1;
- (void)cleanExpiredCacheContent;
- (id)getAllKeysWithOriginKey:(id)a0;
- (id)getMatchedResultWithSearchText:(id)a0;
- (id)getMatchedKeyWithOriginText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getFinalKeyWithKeyArray:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setup;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
