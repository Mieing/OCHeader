@class MMKV, NSDictionary, FMDatabaseQueue, NSMutableDictionary;

@interface TTTrackerStorageManager : NSObject

@property (retain, nonatomic) FMDatabaseQueue *databaseQueue;
@property (retain, nonatomic) FMDatabaseQueue *databaseV3Queue;
@property (copy) NSDictionary *timeSyncDicts;
@property (nonatomic) long long errorCount;
@property (retain, nonatomic) MMKV *eventV3Storage;
@property (copy, nonatomic) NSDictionary *databaseRebuildConfig;
@property (retain, nonatomic) NSMutableDictionary *databaseErrorInfoDict;

+ (void)setDatabaseFileSizeLimit:(unsigned long long)a0;
+ (void)setMMKVCacheConfiguration:(id)a0;
+ (void)setDbLoggingConfiguration:(id)a0;
+ (void)setDbV3LoggingConfiguration:(id)a0;
+ (void)setDbRebuildConfiguration:(id)a0;
+ (void)setEventV3BatchInsertEnable:(BOOL)a0;
+ (BOOL)enableMMKVCache;
+ (long long)removeFlushThreshold;
+ (unsigned long long)databaseFileSizeLimit;
+ (id)columnsForTable:(id)a0 databaseQueue:(id)a1;
+ (long long)maxMMKVCacheCount;
+ (id)sharedManager;

- (void)clearAllEventData;
- (void)updateServerTime:(long long)a0;
- (id)allV3Tracks:(BOOL)a0;
- (id)storedIsolationKeys;
- (id)allTracksUsingOptions:(id)a0;
- (id)allV3TracksUsingOptions:(id)a0;
- (id)allTracks;
- (void)deleteTrackCreatedBefore:(double)a0;
- (void)deleteV3TrackCreatedBefore:(double)a0;
- (void)removeTracksByID:(id)a0;
- (void)removeV3TracksByID:(id)a0;
- (BOOL)shouldRebuildDatabase;
- (void)clearDatabaseErrorInfo;
- (id)checkDBFile;
- (void)recordDatabaseErrorIfNeeded:(id)a0;
- (void)updateV3LastActionTimeForSessionTrack:(id)a0;
- (BOOL)insertV3Track:(id)a0 error:(id *)a1;
- (BOOL)insertTrack:(id)a0 error:(id *)a1;
- (void)updateTrackOfIDs:(id)a0 sending:(BOOL)a1;
- (void)updateV3TrackOfIDs:(id)a0 sending:(BOOL)a1;
- (BOOL)insertV3Track:(id)a0 trackID:(id)a1 error:(id *)a2;
- (id)checkV3DBFile;
- (void)configDatabaseWithDb:(id)a0 configuration:(id)a1;
- (id)rebuildDatabaseWithDatabaseQueue:(id)a0;
- (BOOL)insertTrack:(id)a0 trackID:(id)a1 error:(id *)a2;
- (BOOL)needToStr:(id)a0;
- (void)flushTrackV3MMKVIntoSql:(id *)a0;
- (BOOL)batchDatabaseV3Queue:(id)a0 error:(id *)a1;
- (BOOL)databaseV3Queue:(id)a0 error:(id *)a1;
- (void)flushTrackV3MMKVIntoSql;
- (long long)allV3TracksCount;
- (long long)allTracksCount;
- (void)deleteTracksForSession:(id)a0;
- (void)deleteV3TracksForSession:(id)a0;
- (void)queryV3Events:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
