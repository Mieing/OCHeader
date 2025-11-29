@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPKVStorageMigrator : NSObject

@property (nonatomic) BOOL isMigrate;
@property (retain, nonatomic) NSMutableDictionary *stopDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (void)bootstrapLoad;
+ (id)shareInstance;

- (void)stopMigrationWithID:(id)a0;
- (void)migrateSandBox;
- (BOOL)migrateDBToMMKVWithID:(id)a0;
- (BOOL)shouldStopWithAppID:(id)a0;
- (BOOL)asyncMigrateFromDB:(id)a0 toMMKV:(id)a1 appID:(id)a2;
- (void).cxx_destruct;

@end
