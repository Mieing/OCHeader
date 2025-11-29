@class HMDThreadSafeArray, HMDThreadSafeDictionary, WCTDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AFDMomentColorRingSourceCache : NSObject <AWEUserMessage, AFDMomentColorRingCacheProtocol>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) HMDThreadSafeArray *requestingItems;
@property (nonatomic) BOOL isCachePrepared;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (retain, nonatomic) HMDThreadSafeDictionary *memoryCache;
@property (retain, nonatomic) HMDThreadSafeArray *existItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retrieveCachedAwemeForItemID:(id)a0;
- (void)setupCache;
- (id)cachedItemIDs;
- (void)prepareDatabase;
- (BOOL)createTableWithError:(id *)a0;
- (BOOL)isCorrupted:(id)a0;
- (void)updateItemWithAwemeModel:(id)a0;
- (void)updateItemWithAwemeList:(id)a0;
- (void)forceStorageCacheToLocal;
- (id)cachedAwemeList;
- (void)fixErrorReport;
- (void)deleteUsersWithItemIDs:(id)a0;
- (id)getAllSnapShotItems;
- (void).cxx_destruct;
- (id)dbFilePath;
- (id)init;
- (void)updateItem:(id)a0;
- (void)deleteItems:(id)a0;
- (void)resetCache;
- (id)tableName;

@end
