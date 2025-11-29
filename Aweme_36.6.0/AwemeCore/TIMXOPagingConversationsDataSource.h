@class NSArray, NSTimer, NSString, TIMXSDKInstance, NSMutableArray, NSCache;
@protocol TIMXMessageStoreProtocol, TIMXOPagingConversationsChangeObserver;

@interface TIMXOPagingConversationsDataSource : NSObject <TIMXMessageStoreChangesObserver> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSArray *arrInboxType;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) BOOL includeEmptyConversation;
@property (retain, nonatomic) NSMutableArray *currentConversations;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) NSCache *filterResultCache;
@property (retain) NSTimer *refreshTimer;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) BOOL refreshing;
@property (copy) NSString *refreshingToken;
@property (weak, nonatomic) id<TIMXOPagingConversationsChangeObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidConversationFilterResult:(id)a0;
- (void)onMessagesCreatedV2:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onConversationsCreated:(id)a0;
- (void)onConversationsUpdated:(id)a0 context:(id)a1;
- (void)onConversationsDeleted:(id)a0;
- (void)onConversationCleared:(id)a0;
- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void)dealWithUpdate:(id)a0;
- (id)initWithRootObject:(id)a0 filter:(id /* block */)a1 includeEmpty:(BOOL)a2 inbox:(id)a3;
- (id)conversationByPageNumbers:(long long)a0 pageIndex:(long long)a1;
- (void)asyncGetUnreadCountWithInboxes:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)onMessagesDeleted:(id)a0 belongingConversationMap:(id)a1;
- (void).cxx_destruct;

@end
