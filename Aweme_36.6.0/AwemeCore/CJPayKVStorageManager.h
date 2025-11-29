@class NSString, MMKV, NSObject;
@protocol OS_dispatch_queue;

@interface CJPayKVStorageManager : NSObject <CJPayKVMigrationProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *kvQueue;
@property (nonatomic) BOOL isMigrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)migrationConfig;
- (id)standardizedClassNameForObject:(id)a0;
- (id)classKeyForKey:(id)a0;
- (void)addMigrationSignIfNeededForKey:(id)a0;
- (void)migrateValueIfNeededForKey:(id)a0 type:(long long)a1;
- (id)measureAndReportReadWithKey:(id)a0 type:(long long)a1 block:(id /* block */)a2;
- (void)measureAndReportWriteWithKey:(id)a0 type:(long long)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)addDirtySignIfNeededForKey:(id)a0;
- (void)measureAndReportRemoveWithKey:(id)a0 type:(long long)a1 block:(id /* block */)a2;
- (void)updateMigrationConfigForKey:(id)a0 dirty:(BOOL)a1;
- (void)reportKVPerformanceWithKey:(id)a0 type:(long long)a1 oper:(long long)a2 cost:(double)a3;
- (void)synchronize;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
