@class HMDThreadSafeArray, NSString, HMDThreadSafeDictionary;
@protocol AWEAwemeModelCacheProtocol;

@interface AFDMomentColorRingAwemeCache : NSObject <AFDMomentColorRingCacheProtocol>

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) id<AWEAwemeModelCacheProtocol> awemeCache;
@property (nonatomic) BOOL cacheInitialLoaded;
@property (retain, nonatomic) HMDThreadSafeDictionary *memoryCache;
@property (retain, nonatomic) HMDThreadSafeArray *existItems;
@property (readonly, nonatomic) BOOL isCachePrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retrieveCachedAwemeForItemID:(id)a0;
- (id)cachedItemIDs;
- (void)updateItemWithAwemeModel:(id)a0;
- (void)updateItemWithAwemeList:(id)a0;
- (void)forceStorageCacheToLocal;
- (id)cachedAwemeList;
- (void).cxx_destruct;
- (id)init;
- (void)updateItem:(id)a0;
- (void)deleteItems:(id)a0;
- (void)resetCache;

@end
