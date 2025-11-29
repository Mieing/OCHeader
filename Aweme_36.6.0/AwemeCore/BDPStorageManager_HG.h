@class FMDatabaseQueue, BDPDBStorage;

@interface BDPStorageManager_HG : NSObject {
    BOOL _usageTableExist;
    BOOL _usageRecordTableExist;
}

@property (retain, nonatomic) FMDatabaseQueue *oldDBQueue;
@property (retain, nonatomic) BDPDBStorage *storage;
@property (retain, nonatomic) BDPDBStorage *subsribeHistoryStorage;
@property (retain, nonatomic) FMDatabaseQueue *dbQueue;
@property (readonly, nonatomic) BOOL oldPkgTableExists;

+ (long long)maxFileSizeForAppID:(id)a0 model:(id)a1;
+ (id)appModelFromData:(id)a0;
+ (id)modelDataFromAppModel:(id)a0;
+ (id)appModelExtensionFromData:(id)a0;
+ (id)modelExtensionDataFromAppModel:(id)a0;
+ (id)dateFromTimestamp:(long long)a0;
+ (id)sharedManager;
+ (long long)currentTimestamp;
+ (void)clearSharedManager;

- (long long)getLastLaunchTimeForAppID:(id)a0;
- (BOOL)isExistedOldVersionDB;
- (void)removeOldVersionDB;
- (void)setLastLaunchTime:(long long)a0 forAppID:(id)a1 type:(long long)a2 limit:(unsigned long long)a3;
- (void)clearAllTable;
- (id)appIdsFromUsageInfoOfTypes:(id)a0 limit:(unsigned long long)a1;
- (long long)getUsageAppCount;
- (void)clearUsageInfoTable;
- (long long)getLatestLaunchTimeForWebApp;
- (id)getLatestLaunchGamesWithLimit:(unsigned long long)a0;
- (void)createUsageRecordWithAppID:(id)a0 startTime:(long long)a1 duration:(long long)a2 scene:(id)a3 subScene:(id)a4;
- (id)getUsageRecordByAppIDs:(id)a0;
- (void)deleteExpireUsageRecordByStartTime:(long long)a0;
- (void)deleteOldUsageTableIfNeed;
- (void)insertUserInfoWithAppId:(id)a0 did:(id)a1 aid:(id)a2 newUser:(BOOL)a3 duration:(int)a4;
- (void)findNewUserWithAppId:(id)a0 completion:(id /* block */)a1;
- (void)updateUserInfoWithAppId:(id)a0 newUser:(BOOL)a1 duration:(int)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
