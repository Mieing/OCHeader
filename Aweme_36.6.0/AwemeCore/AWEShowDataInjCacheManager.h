@class AWEShowDatainjCacheTracker, NSMutableDictionary, AWEShowDataInjCacheRequester, NSHashTable, NSString;

@interface AWEShowDataInjCacheManager : NSObject <AWEShowDataInjCacheDelegate, AWEShowDataInjCacheService>

@property (retain, nonatomic) NSHashTable *plugins;
@property (retain, nonatomic) NSMutableDictionary *configsBySceneID;
@property (retain, nonatomic) NSMutableDictionary *cacheBySceneID;
@property (retain, nonatomic) AWEShowDatainjCacheTracker *tracker;
@property (retain, nonatomic) AWEShowDataInjCacheRequester *requester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCacheInfoForGetDataInfo:(id)a0;
- (void)fetchDataForFetchDataInfo:(id)a0 completion:(id /* block */)a1;
- (void)cleanAllForScene:(id)a0 reason:(unsigned long long)a1;
- (void)cleanForScene:(id)a0 businessID:(id)a1 reason:(unsigned long long)a2;
- (id)generateInjDataForData:(id)a0 msg:(id)a1 extra:(id)a2;
- (void)cache:(id)a0 didSaveCacheForKey:(id)a1 object:(id)a2;
- (void)cache:(id)a0 removeObject:(id)a1 forKey:(id)a2 withReason:(unsigned long long)a3;
- (id)createCacheWithConfig:(id)a0;
- (id)createCacheKeyWithSceneID:(id)a0 businessID:(id)a1;
- (id)generateInjDataForCacheInfo:(id)a0 extra:(id)a1;
- (id)getBusinessIDFromCache:(id)a0 withCacheKey:(id)a1;
- (void)registerSceneWithConfigs:(id)a0;
- (void)removeRegisterSceneWithSceneIDs:(id)a0;
- (BOOL)containsCacheForSceneID:(id)a0 businessID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)registerPlugin:(id)a0;
- (void)removePlugin:(id)a0;

@end
