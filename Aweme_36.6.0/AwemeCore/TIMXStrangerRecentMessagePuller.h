@class TIMXStrangerMessageLinkTracker, NSString, TIMXSDKInstance, NSObject;
@protocol TIMXKVStorageProtocol, TIMXPullerStatusChangeObserverDelegate, TIMXMessageStoreProtocol, OS_dispatch_queue;

@interface TIMXStrangerRecentMessagePuller : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) BOOL isPullingOfflineRecentStangerMessage;
@property (nonatomic) BOOL isPullingOfflineStrangerConversation;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (nonatomic) long long hasPullConversationCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_sharedOperationQueue;
@property (nonatomic) double lastStrangerOfflinePullTime;
@property (nonatomic) BOOL delayStrangerOfflinePullExists;
@property (retain, nonatomic) TIMXStrangerMessageLinkTracker *msgLinkTracker;
@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fixStrangerRemoteLoadMoreIfNeed;
- (long long)readLatestStrangerVersion;
- (void)pullOfflineRecentStrangerConversationsInInbox:(int)a0 fromEarliestStrangerVersion:(long long)a1 toLatestStrangerVersion:(long long)a2 source:(id)a3 newUser:(int)a4 ext:(id)a5 bizInfo:(id)a6 shouldCropDB:(BOOL)a7 completion:(id /* block */)a8;
- (void)pullOfflineRecentStrangerConversationsInInbox:(int)a0 fromEarliestStrangerVersion:(long long)a1 toLatestStrangerVersion:(long long)a2 source:(id)a3 newUser:(int)a4 ext:(id)a5 bizInfo:(id)a6 shouldCropDB:(BOOL)a7 context:(id)a8 completion:(id /* block */)a9;
- (id)readOldestStrangerVersion;
- (void)pullOfflineRecentStrangerConversationsInInbox:(int)a0 fromEarliestStrangerVersion:(long long)a1 toLatestStrangerVersion:(long long)a2 source:(id)a3 newUser:(int)a4 ext:(id)a5 bizInfo:(id)a6 shouldCropDB:(BOOL)a7 limitPage:(id)a8 completion:(id /* block */)a9;
- (void)pullOfflineStrangerMessageManuallyWithInbox:(int)a0 completion:(id /* block */)a1;
- (void)migrationKVForSplitDBIfNeeded;
- (void)pullOfflineRecentStrangerConversationsInInbox:(int)a0 fromEarliestStrangerVersion:(long long)a1 toLatestStrangerVersion:(long long)a2 source:(id)a3 newUser:(int)a4 ext:(id)a5 bizInfo:(id)a6 shouldCropDB:(BOOL)a7 limitPage:(id)a8 context:(id)a9 completion:(id /* block */)a10;
- (void)writeOldestStrangerVersion:(id)a0 forceUpdate:(BOOL)a1;
- (long long)findMaxVersionFromArray:(id)a0;
- (long long)findMinVersionFromArray:(id)a0;
- (void)writeLatestStrangerVersion:(id)a0;
- (void)writeOldestStrangerVersion:(id)a0;
- (void)cleanKVForSplit;
- (void).cxx_destruct;
- (id)inboxes;
- (id)initWithRootObject:(id)a0;

@end
