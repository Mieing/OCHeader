@class NSString, TIMXSDKInstance;

@interface TIMXOMessageManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getConversationTicketWithIdentifier:(id)a0 rootObject:(id)a1;
+ (void)checkModifyMessageArgument:(id)a0 newContent:(id)a1 newExt:(id)a2 completion:(id /* block */)a3;
+ (id)checkNewContent:(id)a0 withMessage:(id)a1;
+ (id)checkNewExt:(id)a0 withMessage:(id)a1;

- (id)messagesIdentifiersInMessageTypes:(id)a0 inConversation:(id)a1 limit:(long long)a2;
- (void)asyncGetUnreadMessagesForHintType:(long long)a0 inConversation:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)lastHintMessageCreateAtDictWithConversationIdentifiers:(id)a0;
- (long long)getAllMessagesCountInTypes:(id)a0 isDeleted:(BOOL)a1;
- (id)filterHiddenMessageWithDict:(id)a0;
- (id)messagesBelongingInMessageTypesV2:(id)a0 inConversation:(id)a1 slideDirection:(unsigned long long)a2 baseMessage:(id)a3 limit:(unsigned long long)a4;
- (void)asyncGetUnreadMessagesFromSender:(long long)a0 inConversation:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)asyncGetMessagesAfterIndexForHintTypes:(id)a0 inConversation:(id)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (id)messagesBelongingInMessageTypes:(id)a0 inConversation:(id)a1;
- (BOOL)hasSendMessagesInConversation:(id)a0 excludeMessageTypes:(id)a1;
- (BOOL)hasSendMessagesInConversation:(id)a0 userID:(long long)a1 intervalSinceNow:(double)a2 belongingInMessageTypes:(id)a3;
- (BOOL)hasSendMessagesInConversation:(id)a0 userID:(long long)a1 intervalSinceNow:(double)a2 excludeMessageTypes:(id)a3;
- (id)messagesBeforeTime:(double)a0 inTypes:(id)a1 limit:(unsigned long long)a2;
- (void)getRemoteMessageForMessageID:(id)a0 serverMessageID:(long long)a1 inConversation:(id)a2 conversationShortID:(long long)a3 conversationType:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)batchGetRemoteMessagesForServerMessageIDs:(id)a0 inConversation:(id)a1 conversationShortID:(long long)a2 conversationType:(unsigned long long)a3 reason:(id)a4 completion:(id /* block */)a5;
- (void)fetchLatestImportantUpdateThreadsWithConversationId:(id)a0 conversationCount:(int)a1 async:(BOOL)a2 completion:(id /* block */)a3;
- (id)messagesBelongingInMessageTypes:(id)a0 inConversation:(id)a1 slideDirection:(unsigned long long)a2 baseMessage:(id)a3 limit:(unsigned long long)a4;
- (id)messagesOfType:(long long)a0 sinceTime:(double)a1;
- (void)asyncGetMessagesAfterIndexForHintType:(long long)a0 inConversation:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)asyncGetMessagesFromSender:(long long)a0 inConversation:(id)a1 afterIndex:(long long)a2 limit:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)asyncGetMentionedMessagesInConversation:(id)a0 afterIndex:(long long)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)modifyMessage:(id)a0 inConversation:(id)a1 newContent:(id)a2 newExt:(id)a3 completion:(id /* block */)a4;
- (void)updateMessageID:(id)a0 conversationID:(id)a1 alterBlockWithForbidNotifyChanged:(id /* block */)a2 completion:(id /* block */)a3;
- (id)earliestMessagesInConversationWithIdentifier:(id)a0 limit:(long long)a1;
- (id)p_paginateArray:(id)a0 pageSize:(long long)a1;
- (id)p_getMessageFromORMMessage:(id)a0;
- (void)batchGetRemoteMessagesForMessageIDs:(id)a0 serverMessageIDs:(id)a1 inConversation:(id)a2 conversationShortID:(long long)a3 conversationType:(int)a4 reason:(id)a5 completion:(id /* block */)a6;
- (id)messagesInConversation:(id)a0 excludeMessageTypes:(id)a1 limit:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
