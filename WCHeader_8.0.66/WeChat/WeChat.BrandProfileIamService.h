@interface WeChat.BrandProfileIamService : MMUserService <TingFlowPlayerNotification, BrandAudioServiceExt, MMServiceProtocol> {
    void /* unknown type, empty encoding */ audioListeners;
}

- (void)flowPlayer:(id)a0 tingItem:(id)a1 onStatusChanged:(int)a2;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)init;
- (void).cxx_destruct;

@end
