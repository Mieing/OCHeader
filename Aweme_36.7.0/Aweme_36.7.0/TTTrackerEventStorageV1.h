@class NSString, FMDatabaseQueue;

@interface TTTrackerEventStorageV1 : NSObject {
    FMDatabaseQueue *fmdb;
}

@property (copy, nonatomic) NSString *databasePath;

+ (id)storageWithPath:(id)a0;
+ (id)defaultDatabasePath;

- (void)queryEvents:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)batchEvents:(id)a0;
- (void)checkDBFile;
- (BOOL)_insertEvent:(id)a0 error:(id *)a1;
- (BOOL)needToRetry;
- (BOOL)insertEvent:(id)a0 error:(id *)a1;
- (unsigned long long)_batchEvents:(id)a0;
- (void).cxx_destruct;
- (id)database;
- (void)removeAllEvents;
- (void)removeEvents:(id)a0;
- (unsigned long long)count;
- (void)removeExpiredData;

@end
