@class NSArray, NSString, WCTDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface AWELocalUserCenterDatabaseManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) WCTDatabase *database;
@property (copy, nonatomic) NSArray *tableConfigs;
@property (copy, nonatomic) NSArray *needDeleteTables;
@property (copy, nonatomic) id /* block */ preparedCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearDB;
+ (id)createTableQueue;
+ (id)dbFilePath;

- (void)didFinishLoginWithUid:(id)a0;
- (void)prepareDatabase;
- (BOOL)isCorrupted:(id)a0;
- (void)clearAllUsers:(id)a0;
- (void)resetCurrentDatabase;
- (BOOL)isTableExist:(id)a0;
- (id)tableName:(id)a0;
- (id)initWithConfigs:(id)a0 needDeleteDatabase:(BOOL)a1 needDeleteTables:(id)a2 preparedCompletion:(id /* block */)a3;
- (id)getAllUsersFromTable:(id)a0 checkValidation:(BOOL)a1;
- (id)getUsersWithUids:(id)a0 table:(id)a1 checkValidation:(BOOL)a2;
- (id)getUsersFromTable:(id)a0 checkValidation:(BOOL)a1 limit:(long long)a2 offset:(long long)a3;
- (id)getUsersFromTable:(id)a0 checkValidation:(BOOL)a1 where:(id)a2;
- (id)getAllUidsFromTable:(id)a0 checkValidation:(BOOL)a1;
- (id)getAllUidsFromTable:(id)a0 checkValidation:(BOOL)a1 where:(id)a2;
- (id)getUserWithUid:(id)a0 table:(id)a1 checkValidation:(BOOL)a2;
- (void)updateUsers:(id)a0 andDeleteUsers:(id)a1 table:(id)a2 completion:(id /* block */)a3;
- (void)prepareTable:(id)a0;
- (BOOL)checkTableNeedDelete:(id)a0;
- (BOOL)createTable:(id)a0;
- (BOOL)createTableWithError:(id *)a0 config:(id)a1;
- (void)trackDbOperationWithTable:(id)a0 trackDict:(id)a1;
- (void)checkTableNeedDeleted:(id)a0 error:(id *)a1;
- (BOOL)isCurrentDatabase;
- (id)getUserWithUid:(id)a0 table:(id)a1;
- (void)updateUser:(id)a0 table:(id)a1;
- (void)deleteUsersWithUserIDs:(id)a0 table:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUpdateTime:(id)a0;

@end
