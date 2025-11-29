@class NSMutableDictionary, NSTimer, NSSet, NSObject;
@protocol OS_dispatch_queue, AFDLocalDataCenterCacheManagerDelegate;

@interface AFDLocalDataCenterCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachesDictionary;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } cachesLock;
@property (retain, nonatomic) NSMutableDictionary *cacheStatusDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheStatusQueue;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (retain, nonatomic) NSSet *disabledTableNames;
@property (nonatomic) BOOL enableReport;
@property (weak, nonatomic) id<AFDLocalDataCenterCacheManagerDelegate> delegate;

- (void)onTimer:(id)a0;
- (void)onTableDataPrepared:(id)a0;
- (void)onTableOverwrite:(id)a0 models:(id)a1;
- (void)onTableUpdate:(id)a0 models:(id)a1;
- (void)onTableDeleteModels:(id)a0 primaryIDs:(id)a1;
- (id)getCacheDataWithTable:(id)a0 primaryIDs:(id)a1 missingPrimaryIDs:(out id *)a2;
- (void)onTableGetData:(id)a0 primaryIDs:(id)a1 models:(id)a2;
- (id)getCacheDataWithTable:(id)a0 where:(id)a1;
- (id)getCachePrimaryIDsWithTable:(id)a0 where:(id)a1;
- (id)getAllCachePrimaryIDsWithTable:(id)a0;
- (id)getAllCacheDataWithTable:(id)a0;
- (void)onTableGetAllData:(id)a0 models:(id)a1;
- (void)onTablesGetMultiData:(id)a0 tables:(id)a1;
- (long long)cacheModeForTable:(id)a0;
- (id)cacheForTableName:(id)a0;
- (void)setCache:(id)a0 forTableName:(id)a1;
- (void)createFullCacheForTable:(id)a0 initialModels:(id)a1;
- (void)updateCacheStatusForTable:(id)a0 requestCount:(long long)a1 missingCount:(long long)a2;
- (id)modelDictionaryFromArray:(id)a0;
- (void)reportCacheStatus;
- (void)checkCacheDiff;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
