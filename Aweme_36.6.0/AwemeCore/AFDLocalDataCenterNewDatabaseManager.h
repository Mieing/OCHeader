@class AFDKeyedRecyclePool, NSString, NSArray, WCTDatabase, NSObject, AFDLocalDataCenterDatabaseContext;
@protocol OS_dispatch_queue;

@interface AFDLocalDataCenterNewDatabaseManager : NSObject <AFDLocalDataCenterDatabase>

@property (copy, nonatomic) NSString *currentUid;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSArray *tables;
@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tableOperationQueue;
@property (retain, nonatomic) AFDLocalDataCenterDatabaseContext *context;
@property (copy, nonatomic) id /* block */ errorReport;
@property (retain, nonatomic) AFDKeyedRecyclePool *multiSelectPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearDBWithSecUserID:(id)a0;
+ (id)dbFilePathWithSecUserID:(id)a0;
+ (void)trackDBInit:(id)a0 startTime:(double)a1 success:(BOOL)a2 error:(id)a3;

- (void)prepareDatabase;
- (id)initWithUserID:(id)a0 secUserID:(id)a1 tables:(id)a2 context:(id)a3;
- (void)clearAllData:(id)a0 completion:(id /* block */)a1;
- (void)syncOverwriteTable:(id)a0 withModels:(id)a1 completion:(id /* block */)a2;
- (void)deleteDataWithTable:(id)a0 withPrimaryIDs:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
- (void)syncUpdateTable:(id)a0 withModels:(id)a1 deleteCondition:(id)a2 completion:(id /* block */)a3;
- (void)updateDataCenterInitStatus:(BOOL)a0;
- (void)updateTable:(id)a0 withModels:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
- (BOOL)isCurrentUidDatabase:(id)a0;
- (BOOL)isCurrentDatabase:(id)a0;
- (void)cleanupInactiveItems:(id)a0 followTable:(id)a1 completion:(id /* block */)a2;
- (id)debug_getAllDataFromTable:(id)a0;
- (void)overwriteTable:(id)a0 withModels:(id)a1 completion:(id /* block */)a2;
- (void)updateTable:(id)a0 withModels:(id)a1 deleteCondition:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
- (void)insertOrUpdateTable:(id)a0 model:(id)a1 property:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
- (id)getDataWithTable:(id)a0 primaryIDs:(id)a1 checkValidation:(BOOL)a2;
- (id)getDataWithTable:(id)a0 checkValidation:(BOOL)a1 where:(id)a2;
- (id)getAllPrimaryIDsFromTable:(id)a0 checkValidation:(BOOL)a1 where:(id)a2;
- (id)getAllPrimaryIDsFromTable:(id)a0 checkValidation:(BOOL)a1;
- (id)getPrimaryIDsFromTable:(id)a0 checkValidation:(BOOL)a1 option:(id)a2;
- (id)getDataFromTable:(id)a0 checkValidation:(BOOL)a1 option:(id)a2;
- (id)getAllDataFromTable:(id)a0 checkValidation:(BOOL)a1;
- (BOOL)isDataExistedWithPrimaryID:(id)a0 inTable:(id)a1;
- (id)getDataWithMultiTables:(id)a0 primaryIDs:(id)a1 checkValidation:(BOOL)a2;
- (id)getDataWithMultiTables:(id)a0 checkValidation:(BOOL)a1 where:(id)a2;
- (void)observeDbError;
- (void)resetCurrentDatabase;
- (void)createAllDBTables;
- (void)checkTableNeedDeleteBeforeCreate:(id)a0;
- (BOOL)isTableExist:(id)a0;
- (BOOL)createDBTable:(id)a0;
- (id)tableName:(id)a0;
- (void)trackTableInit:(id)a0 subAction:(id)a1 startTime:(double)a2 success:(BOOL)a3 error:(id)a4;
- (id)selectObjectsWithTable:(id)a0 checkValidation:(BOOL)a1 conditionWrapper:(id)a2 orderWrapper:(id)a3;
- (void)trackReadOperate:(id)a0 action:(id)a1 startTime:(double)a2 success:(BOOL)a3 error:(id)a4;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })validationCondition;
- (id)selectPrimaryIDWithTable:(id)a0 checkValidation:(BOOL)a1 conditionWrapper:(id)a2 orderWrapper:(id)a3;
- (id)selectRowsWithTable:(id)a0 checkValidation:(BOOL)a1 propertyWrapper:(id)a2 conditionWrapper:(id)a3 orderWrapper:(id)a4;
- (id)prepareMultiSelectForTables:(id)a0 checkValidation:(BOOL)a1 where:(const void *)a2;
- (id)createMultiModel:(id)a0;
- (void)trackMultiRead:(id)a0 action:(id)a1 startTime:(double)a2 success:(BOOL)a3 error:(id)a4 reuseSelect:(BOOL)a5;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })validationConditionInTable:(id)a0;
- (void)overwriteTable:(id)a0 withModels:(id)a1 needRetry:(BOOL)a2 retryTimes:(long long)a3 enterFrom:(id)a4 completion:(id /* block */)a5;
- (void)trackWriteOperate:(id)a0 action:(id)a1 startTime:(double)a2 success:(BOOL)a3 error:(id)a4 enterFrom:(id)a5;
- (void)syncUpdateTable:(id)a0 withModels:(id)a1 deleteCondition:(id)a2 retryTimes:(long long)a3 completion:(id /* block */)a4;
- (long long)rowCountOfTable:(id)a0;
- (void)updateWithoutInsertForTable:(id)a0 models:(id)a1 completion:(id /* block */)a2;
- (void)updateTable:(id)a0 withModels:(id)a1 retryTimes:(long long)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
- (void)deleteDataWithTable:(id)a0 withPrimaryIDs:(id)a1 retryTimes:(long long)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
- (id)getDataFromTable:(id)a0 checkValidation:(BOOL)a1 limit:(long long)a2 offset:(long long)a3;
- (void).cxx_destruct;
- (BOOL)createDatabase;
- (void)dealloc;

@end
