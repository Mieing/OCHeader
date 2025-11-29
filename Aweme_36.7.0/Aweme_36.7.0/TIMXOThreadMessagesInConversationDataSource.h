@class NSArray, NSDictionary;

@interface TIMXOThreadMessagesInConversationDataSource : TIMXORemedialMessagesInConversationDataSource {
    NSArray *_currentThreadsFiltered;
    NSArray *_currentThreadsAll;
    NSDictionary *_threadMap;
}

@property (copy, nonatomic) id /* block */ shouldFilterThreadMessageBlock;

- (id)threadWithThreadId:(id)a0;
- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesCreatedV2:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onMessagesUpdated:(id)a0 belongingConversationMap:(id)a1 updateReasonMap:(id)a2;
- (void)onMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onConversationsCreated:(id)a0;
- (void)onConversationsUpdated:(id)a0 context:(id)a1;
- (void)onConversationsDeleted:(id)a0;
- (id)initPurelyWithRootObject:(id)a0 conversationID:(id)a1 loadFirstFrameDataFirst:(BOOL)a2 conversation:(id)a3 shouldFilterThreadMessageBlock:(id /* block */)a4;
- (id)threadAtIndex:(unsigned long long)a0;
- (void)applyNewResult:(id)a0 reason:(long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)currentThreadsAll;
- (void)setCurrentThreadsAll:(id)a0;
- (id)currentThreadsFiltered;
- (void)setCurrentThreadsFiltered:(id)a0;
- (id)threadMap;
- (void)setThreadMap:(id)a0;
- (void)handleResultMessages:(id)a0 conversation:(id)a1 limit:(long long)a2 DBHasMore:(BOOL)a3 compensation:(BOOL)a4 context:(id)a5 completionBlock:(id /* block */)a6;
- (id)integrityLimitPageIncludeInvisible;
- (void)configThreadModel:(id)a0 shouldCheckIntegrity:(BOOL)a1;
- (id)duplicateFilterThreads:(id)a0;
- (void)n_notifyNewData:(id)a0 previousData:(id)a1 reason:(long long)a2 newThreadData:(id)a3 previousThreadData:(id)a4 updatedThreadIDs:(id)a5 reason:(long long)a6 updateData:(id)a7 context:(id)a8 completion:(id /* block */)a9;
- (void)appendNewMessages:(id)a0 needFixOrder:(BOOL)a1 reason:(long long)a2 context:(id)a3 threadNewResult:(id)a4 updatedThreadIDs:(id)a5 threadUpdateReason:(long long)a6;
- (void)applyNewResult:(id)a0 reason:(long long)a1 threadNewResult:(id)a2 updatedThreadIDs:(id)a3 threadUpdateReason:(long long)a4 context:(id)a5 completion:(id /* block */)a6;
- (id)sortThreadModels:(id)a0;
- (void)appendNewMessages:(id)a0 needFixOrder:(BOOL)a1 context:(id)a2 threadNewResult:(id)a3 updatedThreadIDs:(id)a4 threadUpdateReason:(long long)a5;
- (void)deleteWithIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(long long)a2 context:(id)a3;
- (id)p_filterRootMsgs:(id)a0;
- (id)fetchRootMessagesOfThreadsMap:(id)a0;
- (void)configThreadModelWithOldestMessages:(id)a0 shouldCheckIntegrity:(BOOL)a1;
- (void)applyOldestMessage:(id)a0 thread:(id)a1;
- (void)recursiveIntegrity:(id)a0 modelMessagesArray:(id)a1 thread:(id)a2 didTriggerCompensation:(BOOL)a3 completion:(id /* block */)a4;
- (void)performIntegrityWithMinIndex:(long long)a0 maxIndex:(long long)a1 thread:(id)a2 completion:(id /* block */)a3;
- (void)checkEmpty:(id)a0 thread:(id)a1 completion:(id /* block */)a2;
- (void)generateMinIndexWithFirstContinueRange:(id)a0 thread:(id)a1 minIndex:(long long *)a2 maxIndex:(long long *)a3;
- (void)generateMinIndexWithEmptyRanges:(id)a0 thread:(id)a1 minIndex:(long long *)a2 maxIndex:(long long *)a3;
- (void).cxx_destruct;
- (unsigned long long)numberOfThreads;

@end
