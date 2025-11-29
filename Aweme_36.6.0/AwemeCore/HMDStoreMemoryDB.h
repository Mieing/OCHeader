@class NSMutableDictionary;

@interface HMDStoreMemoryDB : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _memoryDBMutex;
}

@property (retain, nonatomic) NSMutableDictionary *databaseDic;

- (id)tableWithTableName:(id)a0 appID:(id)a1;
- (BOOL)insertObjects:(id)a0 into:(id)a1 appID:(id)a2;
- (id)getAllObjectsWithTableName:(id)a0 appID:(id)a1;
- (id)getObjectsWithTableName:(id)a0 appID:(id)a1 limit:(long long)a2;
- (void)deleteAllObjectsFromTable:(id)a0 appID:(id)a1;
- (void)deleteObjectsFromTable:(id)a0 appID:(id)a1 count:(long long)a2;
- (long long)recordCountForTable:(id)a0 appID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
