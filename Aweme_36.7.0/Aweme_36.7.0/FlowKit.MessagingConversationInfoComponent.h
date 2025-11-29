@interface FlowKit.MessagingConversationInfoComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMBotServiceDelegate, FlowIMX.FlowIMConversationServiceDelegate, FlowIMX.FlowIMConnectionServiceDelegate> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _banComponent;
    void /* unknown type, empty encoding */ _botSettingsComponent;
    void /* unknown type, empty encoding */ _temporaryChatComponent;
    void /* unknown type, empty encoding */ _caseComponent;
    void /* unknown type, empty encoding */ _pieComponent;
    void /* unknown type, empty encoding */ _useLocalSubConversation;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _conversation;
    void /* unknown type, empty encoding */ _isImmersiveMode;
    void /* unknown type, empty encoding */ _shouldIgnorePagerContainer;
    void /* unknown type, empty encoding */ _conversationName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationInfoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isConnecting;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void)conversationLastMessageChanged:(id)a0;
- (void)conversationDidForceDelete:(id)a0;
- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)conversationInfosChanged:(id)a0;
- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;
- (void)onChangeReachabilityStatus:(BOOL)a0;
- (void)onClickConversationInfo;
- (void).cxx_destruct;
- (id)init;

@end
