@class NSArray, NSString, TIMXSDKInstance;
@protocol TIMXStrangerConversationFetcherProtocol, TIMXOStrangerConversationDataSourceDelegate;

@interface TIMXOStrangerConversationDataSource : NSObject <TIMXStrangerConversationFetcherProtocolDelegate> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXStrangerConversationFetcherProtocol> fetcher;
@property (weak, nonatomic) id<TIMXOStrangerConversationDataSourceDelegate> internalDelegate;
@property (readonly, copy, nonatomic) NSArray *currentConversations;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long unreadCount;
@property (weak, nonatomic) id<TIMXOStrangerConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)markConversationAsRead:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversation:(id)a0 completion:(id /* block */)a1;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 countPerPage:(int)a2;
- (void)fetchNextPageWithBizInfo:(id)a0 completion:(id /* block */)a1;
- (void)loadRemedialyStrangerConversationsWithBizInfo:(id)a0 completion:(id /* block */)a1;
- (void)fetchMessagesInConversation:(id)a0 completion:(id /* block */)a1;
- (void)deleteMessage:(long long)a0 inConversation:(id)a1 sendToServer:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteMessageNew:(id)a0 inConversation:(id)a1 sendToServer:(BOOL)a2 completion:(id /* block */)a3;
- (void)strangerConversationCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (void)strangerMessageCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (id)getFetcher;
- (id)analysisStrangerConversationWeightWithExt:(id)a0 whiteList:(id)a1;
- (BOOL)enableGetHighWeightStrangerConversationWhenFansCountEnable;
- (id)getStrangerBizInfo;
- (id)fetchLatestEnterStrangerBoxTime;
- (void)deleteAllConversationWithCompletion:(id /* block */)a0;
- (void)markConversationAsReadWithShortID:(long long)a0 completion:(id /* block */)a1;
- (void)strangerConversationFetcherDidUpdate:(id)a0 updateConversationIdentifiers:(id)a1 reason:(long long)a2;
- (void)fetchNextPageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (int)inbox;

@end
