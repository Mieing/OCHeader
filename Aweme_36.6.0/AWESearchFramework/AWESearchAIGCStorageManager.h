@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWESearchAIGCStorageManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableArray *conversationOrder;
@property (retain, nonatomic) NSMutableDictionary *questionMap;
@property (retain, nonatomic) NSMutableDictionary *answerMap;
@property (copy, nonatomic) NSString *currentUid;
@property (nonatomic) BOOL hasSendQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)getObjectForType:(unsigned long long)a0 uuid:(id)a1;
- (void)addAnswerStorageWithViewModel:(id)a0 uuid:(id)a1 conversationID:(id)a2 conversationRank:(unsigned long long)a3 searchID:(id)a4 byteSyncData:(id)a5;
- (void)saveObject:(id)a0 forType:(unsigned long long)a1 uuid:(id)a2;
- (void)removeExpiredHistory;
- (void)deleteConversationStorageWithViewUUID:(id)a0;
- (void)removeObjectForType:(unsigned long long)a0 uuid:(id)a1;
- (id)storageKeyForType:(unsigned long long)a0 uuid:(id)a1;
- (void)resetDataIfNeeded;
- (id)getHistory;
- (void)updateAnswerStorageWithViewModel:(id)a0;
- (void)clearHistoryInStorage;
- (id)addQuestionStorageWithViewModel:(id)a0;
- (void)deleteRound:(id)a0;
- (void)updateQuestionStorageWithUUID:(id)a0 conversationID:(id)a1 conversationRank:(unsigned long long)a2 searchID:(id)a3;
- (double)getLastUpdateHistoryTS;
- (void)saveLastUpdateHistoryTS:(double)a0;
- (void).cxx_destruct;
- (id)storage;
- (id)init;
- (void)dealloc;
- (BOOL)hasHistory;

@end
