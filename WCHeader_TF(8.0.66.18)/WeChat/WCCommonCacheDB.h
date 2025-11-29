@class WCTDatabase, WCTTable;

@interface WCCommonCacheDB : NSObject

@property (nonatomic) long long cacheLimitCount;
@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *cacheTable;

+ (id)GetDBConfigPath;
+ (id)GetDBPath;

- (id)init;
- (BOOL)reloadDataBase;
- (void)changeToRelativePath;
- (BOOL)createCacheTable;
- (BOOL)addCommonCacheObj:(id)a0;
- (id)getCacheWithFileMd5:(id)a0;
- (void)removeCachesWithFileMd5:(id)a0;
- (void)removeCachesWithFilePath:(id)a0;
- (void)removeCachesWithAggregateName:(id)a0;
- (void)updateLastUseTime:(id)a0;
- (void)removeCacheByLRU;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
