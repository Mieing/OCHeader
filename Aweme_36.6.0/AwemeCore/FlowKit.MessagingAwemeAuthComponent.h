@interface FlowKit.MessagingAwemeAuthComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appletService;
    void /* unknown type, empty encoding */ isShowingOAuthAlert;
    void /* unknown type, empty encoding */ lastShowedReplyId;
    void /* unknown type, empty encoding */ logger;
}

- (void)handleReceiveMusicAuthResult:(id)a0;
- (void)handleReceiveLocationAuthResult:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
