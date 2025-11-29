@interface AWEFlowModuleServiceImpl : HTSService <FlowIMX.FlowIMChatServiceDelegate, FlowIMX.FlowIMConnectionServiceReceiver, FlowIMX.FlowIMConnectionServiceDelegate, AWEFlowModuleService> {
    void /* unknown type, empty encoding */ douyinFeedIsReady;
    void /* unknown type, empty encoding */ shouldClearChatCache;
}

+ (id)sharedInstance;

- (void)transferToMessageVCWithRouterTransitionInfo:(id)a0;
- (BOOL)enableFlowShareEntrance;
- (id)flowCellModel;
- (BOOL)canShowFlowShareInAwemeModel:(id)a0;
- (id)flowCellModelInAwemeModel:(id)a0;
- (void)shareAwemeToFlowWithAwemeModel:(id)a0 message:(id)a1 sendVideo:(BOOL)a2 enterMethod:(id)a3 completion:(id /* block */)a4;
- (id)flowMessagingViewControllerWithParams:(id)a0;
- (void)openFlowMessagingViewControllerWithParams:(id)a0 sourceViewController:(id)a1 animated:(BOOL)a2;
- (void)fadeInFlowMessagingViewControllerWithParams:(id)a0 sourceViewController:(id)a1;
- (BOOL)enableFlowInAweme;
- (id)flowFeedEntranceAwemeType;
- (id)flowFeedEntranceEventType;
- (BOOL)flowFeedEntranceShow;
- (id)flowFeedEntranceIcon;
- (BOOL)flowIsBanned;
- (id)flowChatModel;
- (void)changeStickOnTopWithServiceModel:(id)a0;
- (void)changeMuteWithActionModel:(id)a0;
- (void)hideFlowWithActionModel:(id)a0;
- (BOOL)enableFlowInAwemeIM;
- (id)bizStickOnTopService;
- (BOOL)onHandleAppOpenUrl:(id)a0 options:(id)a1;
- (void)startFeedReadyTasks;
- (BOOL)disableInUnauthorizedState;
- (void)updateUserID;
- (void)onMessageReceivedWithMessage:(id)a0;
- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
