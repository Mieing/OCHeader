@class FMDatabaseQueue;

@interface BDPStarkStorageManager : NSObject {
    BOOL _appLaunchTimeTableExist;
    BOOL _kvTableExist;
}

@property (retain, nonatomic) FMDatabaseQueue *dbQueue;

+ (id)getSolidCoreConfig;
+ (long long)maxFileSizeForAppID:(id)a0;
+ (id)sharedManager;
+ (long long)currentTimestamp;
+ (void)clearSharedManager;

- (long long)getLastLaunchTimeForAppID:(id)a0;
- (void)cleanPkgAsyncForAppID:(id)a0;
- (void)cleanPkgAsyncForAppID:(id)a0 versionMark:(id)a1;
- (void)cleanAllDeletedPkgAsyncForAppID:(id)a0;
- (void)cleanExtremely;
- (id)KVItemForKey:(id)a0;
- (void)cleanStorageIfNeedForAppID:(id)a0 versionType:(id)a1 isNewUserPath:(BOOL)a2;
- (void)setLastLaunchTime:(long long)a0 forAppID:(id)a1;
- (BOOL)renameToRemovePackage:(id)a0 deleteFolder:(id)a1;
- (BOOL)renamePackage:(id)a0 oldFolder:(id)a1 newFolder:(id)a2;
- (void)cleanOldestAppStorageIfNeed:(id)a0 versionType:(id)a1 isNewUserPath:(BOOL)a2;
- (void)shrinkDiskIfNeed:(id)a0 versionType:(id)a1 needCheckTime:(BOOL)a2 isNewUserPath:(BOOL)a3;
- (id)getAllAppLaunchTimes;
- (void)p_cleanAllStorageForAppID:(id)a0 versionType:(id)a1 isNewUserPath:(BOOL)a2;
- (long long)getLastShinkDiskTime;
- (void)shrinkDiskForAppID:(id)a0 versionType:(id)a1 isNewUserPath:(BOOL)a2;
- (long long)calcTotalSizeOfFileInfos:(id)a0;
- (void)shrinkDiskForAppID:(id)a0 fileInfos:(id)a1 totalSize:(long long)a2 threshold:(long long)a3;
- (void)setLastShinkDiskTime:(long long)a0;
- (void)p_removeFilesInDirectory:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;

@end
