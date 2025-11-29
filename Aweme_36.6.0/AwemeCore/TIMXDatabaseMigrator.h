@class TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXDatabaseMigrator : NSObject {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_sharedUpgradeQueue;
@property (copy, nonatomic) id /* block */ sortOrderHandler;

+ (BOOL)upgradeCompletedAtVersion:(long long)a0;

- (long long)sortOrderFromConversation:(id)a0 settingInfo:(id)a1;
- (id)p_tableNameFromORMClass:(Class)a0;
- (BOOL)registerTableClass:(Class)a0 inDatabase:(id)a1;
- (void)migrateFromVersion:(long long)a0 inDatabase:(id)a1 completion:(id /* block */)a2;
- (id)limitString:(id)a0 length:(long long)a1;
- (id)tableNameFromORMClass:(Class)a0;
- (BOOL)migrateDatabase:(id)a0;
- (void)upgradeFrom_1_To_2_InDatabase:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)setUpDatabase:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
