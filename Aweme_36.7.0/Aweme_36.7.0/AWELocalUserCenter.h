@class AWELocalUserCenterDatabaseManager, NSDictionary, NSMutableDictionary, NSString, AWELocalUserCenterDataController, AWELocalUserCenterTableConfig;
@protocol IESLCMessageHandlerProtocol;

@interface AWELocalUserCenter : NSObject <IESLCMessageHandlerService, AWEUserMessage>

@property (retain, nonatomic) AWELocalUserCenterDatabaseManager *databaseManager;
@property (retain, nonatomic) AWELocalUserCenterDataController *dataController;
@property (retain, nonatomic) NSDictionary *tableConfigs;
@property (retain, nonatomic) AWELocalUserCenterTableConfig *familiarTableConfig;
@property (retain, nonatomic) AWELocalUserCenterTableConfig *colorRingTableConfig;
@property (retain, nonatomic) NSMutableDictionary *needDeleteUidDict;
@property (retain, nonatomic) NSMutableDictionary *updateUserDict;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearDB;
+ (void)clearAllTableMetas;
+ (id)sharedCenter;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)fetchUserCenterDataWhenColdLaunch;
- (void)didDislikeUserWithContext:(id)a0 error:(id)a1;
- (id)getAllUsersFromTable:(id)a0;
- (id)getUserWithUid:(id)a0 tableName:(id)a1;
- (BOOL)enableFetchData;
- (BOOL)checkNeedDeleteDatabase;
- (id)checkNeedDeleteTables;
- (void)addTableConfig:(id)a0;
- (void)fetchDataWithSource:(long long)a0;
- (void)fetchDataWithTables:(id)a0 source:(long long)a1;
- (id)commonQueryParam;
- (void)processTableWithModel:(id)a0 tableConfig:(id)a1 tables:(id)a2 source:(long long)a3;
- (void)trackDataErrorWithScene:(id)a0 method:(id)a1;
- (void)updateUsers:(id)a0 andDeleteUsers:(id)a1 tableName:(id)a2 completion:(id /* block */)a3;
- (void)getAllUsersFromTable:(id)a0 checkValidation:(BOOL)a1 completion:(id /* block */)a2;
- (id)getTableConfig:(id)a0;
- (void)reportUserCenterWithTableName:(id)a0 isFrontier:(BOOL)a1;
- (id)getAllUsersFromTable:(id)a0 checkValidation:(BOOL)a1;
- (id)getUserWithUid:(id)a0 tableName:(id)a1 checkValidation:(BOOL)a2;
- (void)colorRingChangedNotificationWithUpdateUsers:(id)a0 deletedUsers:(id)a1;
- (void)updateUsers:(id)a0 andDeleteUsers:(id)a1 tableName:(id)a2 shouldSendNoti:(BOOL)a3 completion:(id /* block */)a4;
- (void)deleteUsers:(id)a0 tableName:(id)a1 forceDelete:(BOOL)a2 completion:(id /* block */)a3;
- (void)disableCurrentDataController;
- (void)deleteUser:(id)a0 tableName:(id)a1;
- (void)compensateUserCenterWithTableName:(id)a0 userIDs:(id)a1 completion:(id /* block */)a2;
- (id)getUsersWithUids:(id)a0 tableName:(id)a1;
- (id)getUsersFromTable:(id)a0 limit:(long long)a1 offset:(long long)a2;
- (id)getUsersFromTable:(id)a0 where:(id)a1;
- (id)getAllUidsFromTable:(id)a0;
- (id)getAllUidsFromTable:(id)a0 where:(id)a1;
- (id)getAllRelatedModels:(id)a0 checkValidation:(BOOL)a1;
- (void)updateLocalUsers:(id)a0 tableName:(id)a1;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getAllTables;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)setupConfig;

@end
