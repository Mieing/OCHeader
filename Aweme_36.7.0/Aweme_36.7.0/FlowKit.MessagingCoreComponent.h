@interface FlowKit.MessagingCoreComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMBotServiceDelegate> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ dataController;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void)handleCancelSelectedText:(id)a0;
- (void)sendMessageNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
