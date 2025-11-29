@interface WeChat.CarPlayVoIPRecentTalksController : WeChat.CarPlayController <IVoIPMessageHistoryExt, MMKernelExt> {
    void /* unknown type, empty encoding */ listTemplate;
    void /* unknown type, empty encoding */ recentVoIPItems;
}

- (void)dealloc;
- (void)onInitOK;
- (void)onReceiveVoIPMessageHistory:(id)a0;
- (void).cxx_destruct;

@end
