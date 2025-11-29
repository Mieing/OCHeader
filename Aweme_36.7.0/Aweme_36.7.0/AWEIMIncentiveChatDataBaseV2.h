@class NSString, NSObject, IESWCDatabase;
@protocol OS_dispatch_queue;

@interface AWEIMIncentiveChatDataBaseV2 : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *dbPath;
@property (retain, nonatomic) IESWCDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operateQueue;
@property (nonatomic) BOOL traceError;
@property BOOL appWillTerminate;

+ (id)tablesConfig;
+ (id)dbPathWithUID:(id)a0;

- (BOOL)deleteCommandMessages;
- (BOOL)insertOrUpdateCommandMessages:(id)a0;
- (BOOL)insertOrUpdateGroupRelations:(id)a0;
- (void)runTransaction:(id /* block */)a0;
- (BOOL)deleteGroupRelations;
- (id)groupRelations;
- (BOOL)insertOrUpdatePrivateRelations:(id)a0;
- (BOOL)deletePrivateRelations;
- (id)privateRelations;
- (id)commandMessagesWithConversationID:(id)a0;
- (void)handleAppWillTerminateNotification:(id)a0;
- (BOOL)prepareDatabase;
- (void)p_createTables;
- (BOOL)p_prepareDataBase;
- (void)asyncOperationWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUID:(id)a0;
- (void)dealloc;

@end
