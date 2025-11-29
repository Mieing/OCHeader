@interface IESIMChatListModifier : NSObject

@property (copy, nonatomic) id /* block */ chatDictFetcher;
@property (copy, nonatomic) id /* block */ chatArrayFetcher;
@property (copy, nonatomic) id /* block */ beforeInsertChatHandler;

- (void)batchInsertChatsWith:(id)a0;
- (void)p_performBeforeInsertHandler:(id)a0;
- (void)p_removeDuplicateChat:(id)a0;
- (void)p_unreadCountConsistencyCheck:(id)a0;
- (void)p_handleOldChatLogic:(id)a0;
- (void)p_coreInsertChats:(id)a0;
- (void)p_notifyInteractNotificationManagerChatsInsert:(id)a0;
- (void)p_randomInsert:(id)a0;
- (void)p_fastInsert:(id)a0;
- (long long)p_locationOfChatAtChatArray:(id)a0 inArray:(id)a1 startIndex:(long long)a2;
- (void).cxx_destruct;

@end
