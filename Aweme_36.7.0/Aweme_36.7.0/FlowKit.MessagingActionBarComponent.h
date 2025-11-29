@interface FlowKit.MessagingActionBarComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMConnectionServiceReceiver, FlowIMX.FlowIMBotServiceDelegate> {
    void /* unknown type, empty encoding */ _botsComponent;
    void /* unknown type, empty encoding */ _instructionComponent;
    void /* unknown type, empty encoding */ _templateComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _dataController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _recordMinutesComponent;
    void /* unknown type, empty encoding */ _inputViewDelegateComponent;
    void /* unknown type, empty encoding */ _voiceCallComponent;
    void /* unknown type, empty encoding */ requestActionBarWhenBotInfoDidChange;
    void /* unknown type, empty encoding */ actionBarRedDotMap;
    void /* unknown type, empty encoding */ cellModels;
    void /* unknown type, empty encoding */ actionBar;
    void /* unknown type, empty encoding */ inputViewControl;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _messageAdapater;
    void /* unknown type, empty encoding */ _pushPermissionGuideProvider;
    void /* unknown type, empty encoding */ commentVC;
    void /* unknown type, empty encoding */ mainBotId;
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_likeBotQueue;
    void /* unknown type, empty encoding */ commentDataFetcher;
    void /* unknown type, empty encoding */ currentShowActionBarByClearContext;
    void /* unknown type, empty encoding */ isDeepThinkingTipsShowing;
}

- (void)onMessageReceivedWithMessage:(id)a0;
- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void)requestConfigurableActionBar;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
