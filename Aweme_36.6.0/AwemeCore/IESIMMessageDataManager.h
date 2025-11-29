@class NSString, TIMXORemedialMessagesInConversationDataSource, TIMXSDKInstance, TIMXOConversation;
@protocol IESIMLoginManagerProtocol, IESIMMessageDataManagerDelegate;

@interface IESIMMessageDataManager : NSObject <TIMXOMessagesDataSourceDelegate, TIMXOChangeObserverDelegate, TIMXOMessageSenderDelegate, TIMXMessageStoreChangesObserver, TIMXPullerStatusChangeObserverDelegate, IESIMTIMXLifeMessage, IESIMMessageDataManagerProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (retain) TIMXORemedialMessagesInConversationDataSource *dataSource;
@property (copy) NSString *messageChangeObserverToken;
@property (copy, nonatomic) NSString *pullerObserverToken;
@property (copy) NSString *sessionId;
@property (retain) TIMXOConversation *conversation;
@property (retain) TIMXOConversation *parentConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESIMLoginManagerProtocol> loginManager;
@property (weak, nonatomic) id<IESIMMessageDataManagerDelegate> delegate;

- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)fetchMarkMessagesWithConversationID:(id)a0 offset:(long long)a1 limit:(unsigned long long)a2 ascending:(BOOL)a3 actionType:(unsigned long long)a4 completion:(id /* block */)a5;
- (BOOL)hasOlderMessages;
- (void)deleteMessage:(id)a0 sendToServer:(BOOL)a1;
- (void)deleteMessage:(id)a0 sendToServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)didStartFetchEmptyMessagesForConvID:(id)a0 shortID:(long long)a1 conversationType:(unsigned long long)a2 inbox:(int)a3;
- (void)didEndFetchEmptyMessagesForConvID:(id)a0 shortID:(long long)a1 conversationType:(unsigned long long)a2 inbox:(int)a3 error:(id)a4;
- (void)fetchMessageDetailWithServerMessageID:(long long)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)loadMessageDetailWithServerMessageID:(long long)a0 conversationShortId:(long long)a1 conversationId:(id)a2 conversationType:(long long)a3 completion:(id /* block */)a4;
- (void)unbindSessionId;
- (void)bindSessionId:(id)a0 forcePullRemoteForFirstPage:(BOOL)a1 loadFirstFrameDataFirst:(BOOL)a2;
- (void)bindSessionId:(id)a0 forcePullRemoteForFirstPage:(BOOL)a1 loadFirstFrameDataFirst:(BOOL)a2 shouldFilterThreadMessageBlock:(id /* block */)a3;
- (id)threadWithThreadId:(id)a0;
- (void)loadOlderMessagesUntilLastReadMessageWithCountPerPage:(long long)a0 maxLoadCount:(long long)a1 completion:(id /* block */)a2;
- (BOOL)hasNewerMessages;
- (void)loadNewestMessagesWithCompletionBlock:(id /* block */)a0;
- (void)loadMessagesWithPriorityUseDB:(BOOL)a0 targetMessageID:(id)a1 direction:(unsigned long long)a2 replaceOldDataSource:(BOOL)a3 limit:(long long)a4 ignoreEmptyRangeMsgs:(BOOL)a5 completionBlock:(id /* block */)a6;
- (void)markMessageRead;
- (void)rebindSessionId:(id)a0;
- (void)bindSessionId:(id)a0;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (id)p_storedSDKRoot;
- (id)p_storedSDKRoot_Nullable;
- (void)conversationsUpdated:(id)a0;
- (void)strangerConversationUpdated:(id)a0;
- (void)strangerConversationsUpdated:(id)a0;
- (void)messageUpdated:(id)a0 inConversation:(id)a1 reason:(long long)a2;
- (void)onConversationCleared:(id)a0;
- (void)bindSessionId:(id)a0 forcePullRemoteForFirstPage:(BOOL)a1;
- (id)threadAtIndex:(unsigned long long)a0;
- (id)itemForMessageId:(id)a0;
- (void)fetchSpecifiedMessageWithConversationID:(id)a0 ConversationShortID:(long long)a1 specifiedMessageListType:(unsigned long long)a2 offset:(long long)a3 pageLimit:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)messageDataSourceDidResetHasMoreState:(id)a0;
- (void)messageDataSource:(id)a0 firstPageDataReadyWithMainThreadBlock:(id /* block */)a1;
- (void)messageDataSourceFirstPageMainThreadBlockExecuted:(id)a0;
- (long long)lastHasReadIndex;
- (void)loadMessagesWithPriorityUseDB:(BOOL)a0 targetMessageID:(id)a1 direction:(unsigned long long)a2 replaceOldDataSource:(BOOL)a3 limit:(long long)a4 completionBlock:(id /* block */)a5;
- (void)markAllMessagesReadBeforeMessage:(id)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)setup;
- (unsigned long long)numberOfThreads;

@end
