@class NSString, TIMXSDKInstance;
@protocol TIMXStrangerConversationFetcherProtocol, TIMXOStrangerExplicitDelegate;

@interface TIMXOStrangerExplicit : NSObject <IESIMSDKStrangerExplicit, TIMXStrangerConversationFetcherProtocolDelegate, TIMXOStrangerConversationDataSourceDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<TIMXStrangerConversationFetcherProtocol> fetcher;
@property (nonatomic) BOOL enableOfflinePullerOptimize;
@property (nonatomic) BOOL isFirstPullAfterWebSocketConnected;
@property (nonatomic) double lastPullTimestamp;
@property (nonatomic) double pullInterval;
@property (weak, nonatomic) id<TIMXOStrangerExplicitDelegate> delegate;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addObserver;
- (id)getFetcher;
- (void)strangerConversationDataSourceDidUpdate:(id)a0 updateConversationIdentifiers:(id)a1 reason:(long long)a2;
- (id)analysisStrangerConversationWeightWithExt:(id)a0 whiteList:(id)a1;
- (BOOL)enableGetHighWeightStrangerConversationWhenFansCountEnable;
- (id)getStrangerBizInfo;
- (id)fetchLatestEnterStrangerBoxTime;
- (void)fetchStrangerInboxWithCompletion:(id /* block */)a0;
- (void)pullOfflineStrangerMessageManuallyyWithIsFirstLoad:(BOOL)a0 completion:(id /* block */)a1;
- (void)deleteAllConversationWithCompletion:(id /* block */)a0;
- (void)loadNewestNoTrashStrangerConvWithCompletion:(id /* block */)a0;
- (void)strangerConversationFetcherDidUpdate:(id)a0 updateConversationIdentifiers:(id)a1 reason:(long long)a2;
- (void)strangerConversationFetcher:(id)a0 didRefetchFirstPageWithBatch:(id)a1;
- (void)strangerConversationFetcher:(id)a0 didRefetchFirstPageWithBatch:(id)a1 realTimeUpdatedTrashConvIds:(id)a2 reason:(long long)a3;
- (void)strangerConversationFetcher:(id)a0 didRefreshHighUpdateConversation:(id)a1;
- (void)strangerConversationFetcher:(id)a0 didRefreshHighWeightConversation:(id)a1;
- (void)p_replaceInnerFetcherWithInbox:(int)a0;
- (void)resetStrangerPullerFlag:(id)a0;
- (void)p_dropDelegateIfNecessary;
- (id)getNewestStrangerConvWithDataSource:(id)a0;
- (id)getFirstWeightStrangerConvWithDataSource:(id)a0;
- (id)getNewestStrangerConvWithoutOrderWithDataSource:(id)a0;
- (BOOL)isTrashStrangerConversationWithStrangerModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
