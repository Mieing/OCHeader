@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TIMXKVStorageProtocol;

@interface TIMXONewConversationsDataSource : TIMXOConversationsDataSource <TIMXOConversationFilterControlDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sortOrderQueue;
@property (nonatomic) long long lastSortOrder;
@property (nonatomic) BOOL hasBeganUpdateSortOrder;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) NSMutableArray *monitorArray;
@property (retain, nonatomic) NSMutableArray *updateSortOrderFailedConvsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadSessions;
- (void)loadRemainingSessions;
- (BOOL)filterControl:(id)a0 shouldShowConversation:(id)a1;
- (BOOL)boxTypeMaskEnable;
- (void)printLogOfFilteredConvIdToFilteredReasonMap:(id)a0 callReason:(id)a1;
- (void)p_loadSessions;
- (id)filterAndHandleEmptyConversations:(id)a0 noCache:(BOOL)a1 reason:(id)a2;
- (void)updateSortOrderToDBWithConversations:(id)a0;
- (BOOL)needUpdateSortOrder;
- (id)loadFirstPageConversation;
- (void)asyncHandleAllDBConversationsWithFirstLoadCount:(unsigned long long)a0;
- (void)asyncHandleNotUpdatedConversations;
- (id)__getConversationsWithLastSortOrder:(id)a0 loadLimit:(id)a1;
- (id)sortedConversations:(id)a0;
- (void)notifyDelegateUpdateConversations:(id)a0 monitorArray:(id)a1 isLoadMore:(BOOL)a2;
- (id)__getConversationsWithLastSortOrder:(id)a0 loadLimit:(id)a1 shouldConsiderMyFansGroup:(BOOL)a2;
- (void)removeDBUnreadsAllConversations;
- (id)__pageLoadRemainingConversationsWithMonitorArrayV2:(id)a0;
- (id)__pageLoadRemainingConversationsWithMonitorArray:(id)a0;
- (id)__pageLoadRemainingConversationsWithLoadDuration:(double *)a0 filterDuration:(double *)a1;
- (void)printInconsistentProcessedUnreadCountAlogWithConvsMap:(id)a0 reasonInfoMap:(id)a1;
- (BOOL)isConNotDisplayWithCon:(id)a0;
- (void)caculateAllSortsOfUnreadCountWithConversations:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
