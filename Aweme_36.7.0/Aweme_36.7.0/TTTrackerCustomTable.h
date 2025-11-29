@class NSString, NSArray, FMDatabaseQueue, MMKV, NSDictionary, NSMutableDictionary;

@interface TTTrackerCustomTable : NSObject

@property (copy, nonatomic) NSString *tableName;
@property (retain, nonatomic) FMDatabaseQueue *databaseQueue;
@property (copy, nonatomic) NSArray *sendingTrackIDs;
@property (retain, nonatomic) MMKV *mmkvStorage;
@property (copy, nonatomic) NSDictionary *databaseRebuildConfig;
@property (retain, nonatomic) NSMutableDictionary *databaseErrorInfoDict;

+ (long long)maxCacheCount;
+ (void)setMMKVCacheConfiguration:(id)a0;
+ (void)setDbLoggingConfiguration:(id)a0;
+ (void)setDbRebuildConfiguration:(id)a0;
+ (BOOL)enableMMKVCache;
+ (long long)removeFlushThreshold;

- (void)clearAllEventData;
- (void)onBatchEndWithResultSuccess:(BOOL)a0;
- (void)removeTracksByID:(id)a0;
- (id)initWithTableName:(id)a0 databaseQueue:(id)a1;
- (void)insertTrack:(id)a0 eventType:(id)a1;
- (id)allTracksWithLimit;
- (id)allTracksWithLimitUsingOptions:(id)a0;
- (void)checkDBFile;
- (id)createTableSql;
- (void)recordDatabaseErrorIfNeeded:(id)a0;
- (id)insertSql;
- (void)flushCacheToDatabase;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
