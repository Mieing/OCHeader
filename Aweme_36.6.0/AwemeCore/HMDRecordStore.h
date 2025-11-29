@class HMDStoreMemoryDB;
@protocol HMDStoreIMP;

@interface HMDRecordStore : NSObject

@property (retain, nonatomic) id<HMDStoreIMP> database;
@property (retain, nonatomic) HMDStoreMemoryDB *memoryDB;

+ (id)removableFilePaths;
+ (BOOL)isDatabaseExist;
+ (void)deleteDatabaseIfNotInit;
+ (struct HMDRecordLocalIDRange { unsigned long long x0; unsigned long long x1; })localIDRange:(id)a0;
+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)removeFileImmediately:(id)a0;
- (unsigned long long)dbFileSize;
- (BOOL)devastateDatabase;
- (id)andConditionsWithLocalIDRange:(struct HMDRecordLocalIDRange { unsigned long long x0; unsigned long long x1; })a0 andConditions:(id)a1;
- (BOOL)cleanupRecordsWithRange:(struct HMDRecordLocalIDRange { unsigned long long x0; unsigned long long x1; })a0 andConditions:(id)a1 storeClass:(Class)a2;
- (BOOL)logicalCleanupRecordsWithRange:(struct HMDRecordLocalIDRange { unsigned long long x0; unsigned long long x1; })a0 andConditions:(id)a1 storeClass:(Class)a2 object:(id)a3;
- (BOOL)needMigrateHistoryData;
- (BOOL)migrateHistoryDataSyncAtFolder:(id)a0;
- (void)removeDeprecatedDatabaseAsyncAtFolder:(id)a0;
- (void)checkDatabaseCorruptionWithPath:(id)a0;
- (BOOL)devastateDatabaseWithPath:(id)a0;
- (void)saveStoreErrorCode:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
