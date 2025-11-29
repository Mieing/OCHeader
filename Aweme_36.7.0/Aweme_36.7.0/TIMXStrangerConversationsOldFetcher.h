@class NSArray, TIMXThreadSafeMutableDictionary, NSString, TIMXPBResponseLongConnectionCallback, NSObject, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol, OS_dispatch_queue, TIMXStrangerConversationFetcherProtocolDelegate;

@interface TIMXStrangerConversationsOldFetcher : NSObject <TIMXMessageStoreChangesObserver, TIMXNotifierDelegate, TIMXInstanceScopeAlwaysNewDIComponent, TIMXStrangerConversationFetcherOldProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) BOOL fetching;
@property (copy, nonatomic) NSArray *currentConversations;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int count;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (nonatomic) long long unreadCount;
@property (nonatomic) int inbox;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, weak, nonatomic) TIMXThreadSafeMutableDictionary *p_sharedMessagesInConversation;
@property (weak, nonatomic) id<TIMXStrangerConversationFetcherProtocolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *currentStrangerConversations;

- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)markConversationAsRead:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversation:(id)a0 completion:(id /* block */)a1;
- (void)fetchNextPageWithBizInfo:(id)a0 completion:(id /* block */)a1;
- (void)fetchMessagesInConversation:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllConversationWithCompletion:(id /* block */)a0;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 countPerPage:(int)a2 isInStrangerList:(BOOL)a3 callbackQueue:(id)a4;
- (void)fetchFirstPageAndReorderWithCompletion:(id /* block */)a0;
- (void)markConversationAsReadWithShortID:(long long)a0 completion:(id /* block */)a1;
- (void)fetchNextPageWithCompletion:(id /* block */)a0;
- (void)applyNewResult:(id)a0 updateConversationIdentifiers:(id)a1 reason:(long long)a2;
- (void)deleteMessage:(long long)a0 inConversation:(id)a1 completion:(id /* block */)a2;
- (void)onStrangerConversationChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
