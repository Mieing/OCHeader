@class FMDatabaseQueue, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECShoppingAIGuideDatabase : NSObject

@property (retain, nonatomic) FMDatabaseQueue *dbQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (nonatomic) unsigned long long agentType;
@property (retain, nonatomic) NSString *agentName;

- (id)filePathStr;
- (void)openPassThrough;
- (id)loadAllMessageModels;
- (void)insertMessageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)updateMessageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllMessage;
- (void)deleteAllPassThrough;
- (id)passThroughTableName;
- (void)insertPassThroughContent:(id)a0 scene:(long long)a1 sessionID:(id)a2 messageUniqueID:(id)a3;
- (void)updatePassThroughContent:(id)a0 scene:(long long)a1 sessionID:(id)a2 messageUniqueID:(id)a3;
- (void)deletePassThroughContent:(id)a0 scene:(long long)a1 sessionID:(id)a2 messageUniqueID:(id)a3;
- (id)initWithAgentType:(unsigned long long)a0 agentName:(id)a1;
- (void)loadHistoryDataWithCompletion:(id /* block */)a0;
- (void)insertMessageWithModel:(id)a0;
- (void)updateMessageWithModel:(id)a0;
- (void)deleteAllMessageWithCompletion:(id /* block */)a0;
- (void)operatePassThroughOpt:(id)a0 content:(id)a1 scene:(long long)a2 sessionID:(id)a3 messageUniqueID:(id)a4;
- (void)queryAllPassThroughInfoWithScene:(long long)a0 isReverse:(BOOL)a1 startIndex:(long long)a2 length:(long long)a3 messageUniqueID:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)open;
- (id)tableName;

@end
