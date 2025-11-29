@class NSArray, NSTimer, NSString, TIMXSDKInstance, NSCache;
@protocol TIMXMessageStoreProtocol, TIMXOUnreadCountDataSourceDelegate;

@interface TIMXOUnreadCountDataSource : NSObject <TIMXMessageStoreChangesObserver> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSArray *arrInboxType;
@property (nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (nonatomic) unsigned long long totalUnreadNumberForMutedConversations;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ rawFilterBlock;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) NSCache *filterResultCache;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) BOOL refreshing;
@property (retain) NSTimer *refreshTimer;
@property (copy) NSString *refreshingToken;
@property (weak, nonatomic) id<TIMXOUnreadCountDataSourceDelegate> delegate;
@property double updateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedUpdate;
- (void)setNeedRefresh:(BOOL)a0;
- (void)invalidConversationFilterResult:(id)a0;
- (void)onConversationsCreated:(id)a0;
- (void)onConversationsUpdated:(id)a0 context:(id)a1;
- (void)onConversationsDeleted:(id)a0;
- (void)_refreshWithToken:(id)a0;
- (void)refreshFired:(id)a0;
- (id)initWithRootObject:(id)a0 filter:(id /* block */)a1 inbox:(id)a2;
- (void).cxx_destruct;
- (void)refresh;
- (void)_refresh;

@end
