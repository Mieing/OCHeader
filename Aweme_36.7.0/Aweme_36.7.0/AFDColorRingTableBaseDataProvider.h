@class NSArray, NSMutableDictionary, NSString;

@interface AFDColorRingTableBaseDataProvider : NSObject <AWEUserMessage> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *dataSource;
@property (retain, nonatomic) NSArray *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerClassArray;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)getAllUserData;
- (void)localDataCenterDidUpdate:(id)a0;
- (BOOL)colorRingTableMigrate;
- (void)updateDataSourceFromUserCenter;
- (void)p_setupHandlers;
- (void)handleUserCenterDatabasePreparedNotification;
- (void)handleUserCenterDidChangeNotification:(id)a0;
- (void)localDataCenterDidPrepare:(id)a0;
- (void)dispatchEventToHandlers:(id /* block */)a0;
- (void)updateUsers:(id)a0 andDeleteUsers:(id)a1;
- (BOOL)updateUser:(id)a0 withNewUser:(id)a1;
- (void)didUpdateUsers:(id)a0;
- (BOOL)isAddedUserWithUid:(id)a0;
- (id)createUserWithUid:(id)a0;
- (void)deprecated_addUserByUid:(id)a0;
- (void)addUserByUid:(id)a0;
- (void)removeUserByUid:(id)a0;
- (id)getUserByUid:(id)a0;
- (id)findUser:(id /* block */)a0;
- (void)updateAllUserData:(id)a0;
- (BOOL)isUserDataEmpty;
- (id)handlerByProtocol:(id)a0;
- (void)updateColorRingInfoToDBWithModels:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateUser:(id)a0;
- (void)p_addObservers;

@end
