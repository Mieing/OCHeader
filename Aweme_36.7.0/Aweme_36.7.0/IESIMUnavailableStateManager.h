@class NSObject, NSString, NSHashTable;
@protocol OS_dispatch_queue;

@interface IESIMUnavailableStateManager : NSObject <IESIMUserServiceMessage>

@property (retain, nonatomic) NSHashTable *weakChannelListeners;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)selectedCoIdWithAwemeIds:(id)a0;
- (void)getAwemeModelForItemId:(id)a0 requestScene:(id)a1 canRequest:(BOOL)a2 result:(id /* block */)a3;
- (void)asyncGetAwemeCacheWithContext:(id)a0 callbackQueue:(id)a1 complete:(id /* block */)a2;
- (void)updateUnavailableStateWithReasonMap:(id)a0 requestSource:(id)a1 completion:(id /* block */)a2;
- (void)onlyFetchUnavailableStateForItemID:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
- (void)addReceiveChannel:(id)a0;
- (void)__async:(id /* block */)a0;
- (id)__sync:(id /* block */)a0;
- (void)tryUpdateMessages:(id)a0 changedMessages:(id /* block */)a1;
- (void)asyncRecordAwemeCoIdWithMessage:(id)a0;
- (void)updateMessagesIfNeed:(id)a0 stateMap:(id)a1 complete:(id /* block */)a2;
- (void)tryUpdateAwemeState:(id)a0 requestSource:(id)a1 complete:(id /* block */)a2;
- (void)p_onlyLoadLocalCacheWithContext:(id)a0 callbackQueue:(id)a1 complete:(id /* block */)a2;
- (void)p_onlyFetchServerWithContext:(id)a0 callbackQueue:(id)a1 complete:(id /* block */)a2;
- (void)p_autoFetchServerWithContext:(id)a0 callbackQueue:(id)a1 complete:(id /* block */)a2;
- (void)unsafe_updateLocalCacheWithResponse:(id)a0;
- (void)p_notifyAwemesUnavailableStateChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
