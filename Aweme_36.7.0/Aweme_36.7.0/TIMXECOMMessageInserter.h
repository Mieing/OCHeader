@class NSString, NSMutableSet, TIMXSDKInstance;

@interface TIMXECOMMessageInserter : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableSet *commandMessageTypeList;
@property (retain, nonatomic) NSMutableSet *additionalNormalMessageTypeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConversation:(id)a0;
- (id)insertMessages:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3 context:(id)a4;
- (void)updateSubConversation:(long long)a0 parentConversationID:(id)a1 parentConversationShortID:(long long)a2 inInbox:(int)a3;
- (void)batchUpdateConversation:(id)a0 inInbox:(int)a1;
- (void)dealReadStateChangeWithConversationID:(id)a0 convUnreadUnion:(id)a1 readIndex:(id)a2 readIndexV2:(id)a3 readBadgeCount:(id)a4;
- (id)syncInsertMessages:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3 context:(id)a4;
- (void)syncDealReadStateChangeWithConversationID:(id)a0 convUnreadUnion:(id)a1 readIndex:(id)a2 readIndexV2:(id)a3 readBadgeCount:(id)a4;
- (BOOL)isCommandMessage:(id)a0;
- (id)insertMessagesBatch:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3 context:(id)a4;
- (void)handleCommandMessage:(id)a0 inInbox:(int)a1 reason:(id)a2 context:(id)a3;
- (BOOL)isNormalMessage:(id)a0;
- (void)handleMinIndexUpdate:(id)a0;
- (void)handleBlockCommand:(id)a0;
- (void)handleRealCommandMessage:(id)a0 inInbox:(int)a1;
- (void)handleConversationDestroy:(id)a0;
- (void)handleMessageAsyncSendFailed:(id)a0;
- (void)handleMessageBarchUnmark:(id)a0;
- (void)handleMessageVisible:(id)a0 inInbox:(int)a1 context:(id)a2;
- (void)handleMessageExtUpdate:(id)a0 reason:(id)a1;
- (void)handleMessagePropertyUpdate:(id)a0 reason:(id)a1;
- (id)converPBMessageToDBMessage:(id)a0;
- (void)handleCommandMarkConversationRead:(id)a0;
- (void)handleCommandDeleteMessage:(id)a0;
- (void)handleCommandDeleteConversation:(id)a0;
- (void)handleCommandSettingInfoUpdate:(id)a0;
- (void)handleCommandCoreInfoUpdate:(id)a0 inInbox:(int)a1;
- (void)handleCommandParticipantsUpdate:(id)a0 inInbox:(int)a1;
- (void)handleCommandMinIndexUpdate:(id)a0;
- (BOOL)validateMessage:(id)a0 reason:(id)a1;
- (void)preHandleBeforeInsertMessage:(id)a0 files:(id)a1 reason:(id)a2;
- (void)preHandleFilesIDArrayOfMessage:(id)a0 files:(id)a1;
- (void)syncHandleCommandMessage:(id)a0 inInbox:(int)a1 reason:(id)a2 context:(id)a3 countMap:(id)a4;
- (void)distinctHandleBlockCommand:(id)a0 inInbox:(int)a1;
- (void)syncHandleRealCommandMessage:(id)a0 inInbox:(int)a1 countMap:(id)a2;
- (void)syncHandleConversationDestroy:(id)a0;
- (void)syncHandleMessageBatchUnmark:(id)a0;
- (void)asyncHandleMessageVisible:(id)a0 inInbox:(int)a1 context:(id)a2;
- (void)syncHandleMessageExtUpdate:(id)a0 reason:(id)a1;
- (void)syncHandleMessagePropertyUpdate:(id)a0 reason:(id)a1;
- (void)syncHandleCommandMarkConversationRead:(id)a0;
- (void)syncHandleCommandDeleteMessage:(id)a0;
- (void)syncHandleCommandDeleteConversation:(id)a0;
- (void)distinctHandleCommandSettingInfoUpdate:(id)a0 inInbox:(int)a1;
- (void)distinctHandleCommandCoreInfoUpdate:(id)a0 inInbox:(int)a1;
- (void)distinctHandleCommandParticipantsUpdate:(id)a0 inInbox:(int)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
