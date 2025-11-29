@interface WSWebViewPlugin_NativeEventMonitor : WSWebViewPluginBase <MMWebPageSheetDelegate, TingFlowPlayerNotification, IMusicPlayerExt, CNetworkStatusExt> {
    void /* unknown type, empty encoding */ enableSendwebviewAppear;
}

- (void)webPageSheetWillDismiss:(id)a0;
- (void)monitorTakeSnapshot;
- (void)observeTingPlayStatus;
- (void)flowPlayer:(id)a0 onPlayTaskStatusChanged:(int)a1 tingItem:(id)a2 onEvent:(int)a3 withContext:(id)a4;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)observeMusicPlayStatus;
- (id)init;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)notifySearchInputChangeWithQuery:(id)a0;

@end
