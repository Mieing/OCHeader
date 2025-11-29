@class NSString, NSObject, IESWCDatabase;
@protocol OS_dispatch_queue;

@interface AWEIMIncentiveChatDataBase : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *dbPath;
@property (retain, nonatomic) IESWCDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isWCDBToTwo;
@property (nonatomic) BOOL traceError;
@property BOOL appWillTerminate;

+ (void)removeDataBaseWithUserID:(id)a0;
+ (id)dbDirectoryPathWithUserID:(id)a0;

- (id)initWithUserID:(id)a0;
- (void)handleAppWillTerminateNotification:(id)a0;
- (void)p_trackLanchIO:(unsigned long long)a0;
- (void)loadChatInfoWithCompletion:(id /* block */)a0;
- (void)updateWithChatInfo:(id)a0 completion:(id /* block */)a1;
- (void)removeDataBaseDataWithChatType:(long long)a0;
- (void)loadDataBaseDataWithChatType:(long long)a0 completion:(id /* block */)a1;
- (void)updateWithChatRelation:(id)a0;
- (void)removeDataWithConversationID:(id)a0 relationID:(id)a1;
- (void)updateWithRelationProgress:(id)a0;
- (void)relationProgressWithRelationID:(id)a0 completion:(id /* block */)a1;
- (void)p_prepareDatabase;
- (void)p_fillMemoryDataAndCleanDBForWCDBTAwoWithHandle:(id)a0 chatIdentity:(id)a1 validConvIDSet:(id)a2 validChatRelationIDSet:(id)a3;
- (void)p_fillMemoryDataAndCleanDBWithChatIdentity:(id)a0 validConvIDSet:(id)a1 validChatRelationIDSet:(id)a2;
- (void)p_asyncOperationWithBlock:(id /* block */)a0;
- (void)p_prepareDatabaseForWCDBTwo;
- (void)p_prepareDatabaseForWCDBOne;
- (BOOL)p_createTables;
- (BOOL)p_initDBforWCDBTwo;
- (BOOL)p_createTableWithTableName:(id)a0 class:(Class)a1 error:(id *)a2;
- (BOOL)p_isCorrupted:(id)a0;
- (void).cxx_destruct;

@end
