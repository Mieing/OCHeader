@class NSString, AWEGameFeedSubscribePermissionView;

@interface AWEGameFeedSubscribeImpl : HTSService <BDPSubscribePluginDelegate, AWEGameFeedSubscribeService, AWEGameFeedSubscribePermissionViewDelegate>

@property (weak, nonatomic) AWEGameFeedSubscribePermissionView *permissionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getStorageKey:(id)a0;
- (BOOL)feedGameSubscribeStatus:(id)a0;
- (void)feedRegisterFetchPermissionInfo:(id)a0 fetchBlock:(id /* block */)a1;
- (void)feedFetchPermissionInfo:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)feedUnsubscribeFeedGame:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)feedShowPermissionView:(id)a0 delegate:(id)a1 parentView:(id)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)feedEnterFeedGame:(id)a0 isSubscribed:(BOOL)a1;
- (void)feedLeaveFeedGame:(id)a0;
- (void)onSubscribePermissionReject:(id)a0;
- (void)onSubscribePermissionAccept:(id)a0;
- (void)onSubscribePermissionClose:(id)a0;
- (id)checkResponse:(id)a0 data:(id)a1;
- (void)recordFeedGameSubscribeStatus:(id)a0 subscribed:(BOOL)a1;
- (void)unsubscribeFeedGame:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)showFeedSubscribePermission:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (BOOL)canShowPermission:(id)a0 scene:(id)a1;
- (id)bdp_checkPermissionFrequencyControl:(id)a0 scene:(id)a1;
- (void)fetchFeedSubscribe:(id)a0 completion:(id /* block */)a1;
- (id)buildPermissionViewWithUniqueID:(id)a0 params:(id)a1;
- (void)bdp_feedGameSubscribe:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)bdp_preloadPermissionResource:(id)a0;
- (void)subscribeFeedGame:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)recordUserActionIfNeed:(id)a0 isReject:(BOOL)a1;
- (void)closePermissionView:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)recordUserAction:(id)a0 scene:(id)a1 isReject:(BOOL)a2;
- (void)bdp_fetchFeedSubscribeStatus:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)bdp_changeFeedCardSubscribeStatus:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)bdp_feedGameSettingInfo:(id)a0 completion:(id /* block */)a1;
- (void)bdp_showFeedSubscribePermission:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
