@class NSString;
@protocol TIMXPullerStatusChangeObserverDelegate, TIMXMessageModelProtocol;

@interface TIMXORemedialMessagesInConversationDataSource : TIMXOMessagesInConversationDataSource <TIMXNotifierDelegate>

@property (nonatomic) long long lastReadIndex;
@property (copy, nonatomic) NSString *notifierToken;
@property (copy, nonatomic) NSString *dbToken;
@property (retain, nonatomic) id<TIMXMessageModelProtocol> lastReadMsg;
@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (nonatomic) BOOL forcePullRemoteForFirstPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchMarkMessagesWithConversationID:(id)a0 offset:(long long)a1 limit:(unsigned long long)a2 ascending:(BOOL)a3 actionType:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)loadOlderMessagesUntilLastReadMessageWithCountPerPage:(long long)a0 maxLoadCount:(long long)a1 completion:(id /* block */)a2;
- (void)loadNewestMessagesWithCompletionBlock:(id /* block */)a0;
- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesCreatedV2:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (id)initPurelyWithRootObject:(id)a0 conversationID:(id)a1 loadFirstFrameDataFirst:(BOOL)a2 conversation:(id)a3;
- (void)loadOlderMessagesRemedialyIgnoreEmptyRangeWithPriorityUseDB:(BOOL)a0 conversationId:(id)a1 targetMessageID:(id)a2 limit:(long long)a3 completionBlock:(id /* block */)a4;
- (void)loadOlderMessagesRemedialyWithPriorityUseDB:(BOOL)a0 targetMessageID:(id)a1 replaceOldDataSource:(BOOL)a2 limit:(long long)a3 completionBlock:(id /* block */)a4;
- (void)loadNewerMessagesRemedialyWithTargetMessageID:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchSpecifiedMessageWithConversationID:(id)a0 ConversationShortID:(long long)a1 specifiedMessageListType:(unsigned long long)a2 offset:(long long)a3 pageLimit:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)didResetHasMoreStateOfConversation:(id)a0;
- (void)preSetupExtOfMessageList:(id)a0;
- (BOOL)checkMessagesContinuous:(id)a0;
- (void)appendNewMessages:(id)a0 needFixOrder:(BOOL)a1 reason:(long long)a2 context:(id)a3;
- (void)appendNewMessages:(id)a0 needFixOrder:(BOOL)a1 context:(id)a2;
- (BOOL)checkMessageValid:(id)a0;
- (void)cycleLoadMessagesBetweenMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 completionBlock:(id /* block */)a2;
- (id)initPurelyWithRootObject:(id)a0 conversationID:(id)a1 loadFirstFrameDataFirst:(BOOL)a2;
- (id)createMonitorWithEvent:(id)a0 monitors:(id)a1;
- (void)handleResultMessages:(id)a0 conversation:(id)a1 limit:(long long)a2 DBHasMore:(BOOL)a3 compensation:(BOOL)a4 context:(id)a5 completionBlock:(id /* block */)a6;
- (id)duplicateFilterMessages:(id)a0;
- (void)integrityIfNeededWithConfig:(id)a0 completionBlock:(id /* block */)a1;
- (void)integrityIfNeededWithAllFilteredMessages:(id)a0 minIndexV1:(long long)a1 minIndexV2:(long long)a2 limit:(long long)a3 messages:(id)a4 compensation:(BOOL)a5 serverHasMore:(BOOL)a6 conversation:(id)a7 context:(id)a8 compensationContext:(id)a9 currentMessagesFiltered:(id)a10 completionBlock:(id /* block */)a11;
- (void)checkInfoMessageWithEmptyRanges:(id)a0;
- (void)trackCompensationIfNeededWithContext:(id)a0 compensationContext:(id)a1 compensation:(BOOL)a2 currentMessagesFiltered:(id)a3;
- (id)_n_extractMessagesLogInfoWithMessagesArray:(id)a0;
- (void)n_notifyNewData:(id)a0 previousData:(id)a1 reason:(long long)a2 updateData:(id)a3 context:(id)a4 completion:(id /* block */)a5;
- (id)intergrityConversationInfoWithIntegrityManager:(id)a0;
- (id)integrityLimitPageIncludeInvisible;
- (id)p_lastReadMessageInfo;
- (void)reconfigLastReadMessageWithMessagesIfNeed:(id)a0;
- (void)cycleLoadOlderMessagesUntilLastReadMessageInMessageArray:(id)a0 beforeMessage:(id)a1 countPerPage:(long long)a2 maxLoadCount:(long long)a3 completion:(id /* block */)a4;
- (id)initPurelyWithRootObject:(id)a0 conversationID:(id)a1;
- (void)n_notifyNewData:(id)a0 previousData:(id)a1 reason:(long long)a2 context:(id)a3;
- (BOOL)_sameArrayCompareSortedMessages:(id)a0 withTargetSortedMessages:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
