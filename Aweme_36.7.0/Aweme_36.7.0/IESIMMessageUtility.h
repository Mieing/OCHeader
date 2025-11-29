@interface IESIMMessageUtility : NSObject

+ (id)messageForIdentifier:(id)a0 inConversation:(id)a1;
+ (void)asyncBatchGetMessagesForIdentifiers:(id)a0 inConversation:(id)a1 useMessageListMemoryCache:(BOOL)a2 completion:(id /* block */)a3;
+ (id)messagesIdentifiersInMessageTypes:(id)a0 inConversation:(id)a1 limit:(long long)a2;
+ (void)asyncGetMessageForServerMsgId:(long long)a0 inConversation:(id)a1 completion:(id /* block */)a2;
+ (void)asyncGetMessageForIdentifier:(id)a0 inConversation:(id)a1 useMessageListMemoryCache:(BOOL)a2 completion:(id /* block */)a3;
+ (id)messageForServerMsgId:(long long)a0 inConversation:(id)a1;
+ (void)fetchMarkMessagesWithConversationID:(id)a0 offset:(long long)a1 limit:(unsigned long long)a2 ascending:(BOOL)a3 actionType:(unsigned long long)a4 completion:(id /* block */)a5;
+ (id)getMessagesBeforeTime:(double)a0 inTypes:(id)a1 limit:(unsigned long long)a2;
+ (void)asyncGetRemoteMessageForServerMessageIDs:(id)a0 conversation:(id)a1 completion:(id /* block */)a2;
+ (id)messageForIdentifier:(id)a0 inConversation:(id)a1 useMessageListMemoryCache:(BOOL)a2;
+ (void)asyncGetMessagesBelongingInMessageTypes:(id)a0 inConversation:(id)a1 completion:(id /* block */)a2;
+ (void)asyncGetUnreadMessagesForHintType:(long long)a0 inConversation:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)messagesWithType:(long long)a0 sinceTime:(double)a1;
+ (id)lastHintMessageCreateAtDictWithConversationIdentifiers:(id)a0;
+ (long long)getAllMessagesCountInTypes:(id)a0 isDeleted:(BOOL)a1;
+ (id)filterHiddenMessageWithDict:(id)a0;
+ (id)messagesBelongingInMessageTypesV2:(id)a0 inConversation:(id)a1 slideDirection:(unsigned long long)a2 baseMessage:(id)a3 limit:(unsigned long long)a4;
+ (void)fetchMessageDetailWithServerMessageID:(long long)a0 conversation:(id)a1 completion:(id /* block */)a2;
+ (id)queryMessageBeingSentWithMessageId:(id)a0 inConversation:(id)a1;
+ (void)deleteMessageForIdentifier:(id)a0 inConversation:(id)a1 sendToServer:(BOOL)a2 completion:(id /* block */)a3;
+ (void)asyncGetUnreadMessagesFromSender:(long long)a0 inConversation:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)asyncGetMessagesAfterIndexForHintTypes:(id)a0 inConversation:(id)a1 limit:(long long)a2 completion:(id /* block */)a3;
+ (void)modifyMessageID:(id)a0 WithConversationID:(id)a1 newContent:(id)a2 mentionedUsers:(id)a3 completion:(id /* block */)a4;
+ (id)generatePropertyModify;
+ (id)generatePropertyItem;
+ (id)messagesBelongingInMessageTypes:(id)a0 inConversation:(id)a1;
+ (void)updateMessageID:(id)a0 conversationID:(id)a1 contentAlterBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)analyzeCleanConvCommandMessage:(id)a0;
+ (BOOL)hasSendMessagesInConversation:(id)a0 excludeMessageTypes:(id)a1;
+ (BOOL)hasSendMessagesInConversation:(id)a0 userID:(long long)a1 intervalSinceNow:(double)a2 belongingInMessageTypes:(id)a3;
+ (BOOL)hasSendMessagesInConversation:(id)a0 userID:(long long)a1 intervalSinceNow:(double)a2 excludeMessageTypes:(id)a3;
+ (void)fetchSpecifiedMessageWithConversationID:(id)a0 ConversationShortID:(long long)a1 specifiedMessageListType:(unsigned long long)a2 offset:(long long)a3 pageLimit:(unsigned long long)a4 completionBlock:(id /* block */)a5;
+ (void)clearCacheMessageBeingSentWithMessageId:(id)a0 inConversation:(id)a1;
+ (void)fetchLatestImportantUpdateThreadsWithConversationId:(id)a0 conversationCount:(int)a1 async:(BOOL)a2 completion:(id /* block */)a3;
+ (id)messagesBelongingInMessageTypes:(id)a0 inConversation:(id)a1 slideDirection:(unsigned long long)a2 baseMessage:(id)a3 limit:(unsigned long long)a4;
+ (void)asyncGetMessagesAfterIndexForHintType:(long long)a0 inConversation:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)asyncGetMessagesFromSender:(long long)a0 inConversation:(id)a1 afterIndex:(long long)a2 limit:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)asyncGetMentionedMessagesInConversation:(id)a0 afterIndex:(long long)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)earliestMessagesInConversationWithIdentifier:(id)a0 limit:(long long)a1;
+ (void)asyncGetRemoteMessageForMessageID:(id)a0 serverMessageID:(long long)a1 inConversation:(id)a2 conversationShortID:(long long)a3 conversationType:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)asyncGetMessagesBeforeTime:(double)a0 inTypes:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)asyncGetHasSendMessagesInConversation:(id)a0 userID:(long long)a1 intervalSinceNow:(double)a2 belongingInMessageTypes:(id)a3 completion:(id /* block */)a4;
+ (void)asyncGetHasSendMessagesInConversation:(id)a0 userID:(long long)a1 intervalSinceNow:(double)a2 excludeMessageTypes:(id)a3 completion:(id /* block */)a4;
+ (id)processQueue;

@end
