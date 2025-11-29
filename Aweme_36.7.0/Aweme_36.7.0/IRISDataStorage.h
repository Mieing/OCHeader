@class NSDictionary, NSString, FMDatabaseQueue;

@interface IRISDataStorage : NSObject {
    FMDatabaseQueue *database;
}

@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *storageIdentifier;
@property (nonatomic) unsigned long long mechanismLevel;

- (unsigned long long)removeAllData;
- (BOOL)vacuum:(id *)a0;
- (unsigned long long)removeExpiredData:(double)a0;
- (id)_createStatement:(id)a0 withOptions:(id)a1;
- (unsigned long long)currentAutoVacuumType;
- (BOOL)addData:(id)a0 error:(id *)a1;
- (unsigned long long)removeData:(id)a0 error:(id *)a1;
- (void)queryData:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)cacheFileSize;
- (void)removeCacheFiles;
- (id)queryStatement:(id)a0;
- (BOOL)start:(id *)a0;
- (void).cxx_destruct;
- (unsigned long long)count:(id)a0;
- (id)executeStatement:(id)a0;
- (id)initWithPath:(id)a0 options:(id)a1;

@end
