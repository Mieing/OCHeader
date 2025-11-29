@interface FlowKit.MessagingContainerViewModel : NSObject <FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ conversations;
    void /* unknown type, empty encoding */ preloadData;
    void /* unknown type, empty encoding */ trackParameters;
    void /* unknown type, empty encoding */ onDataUpdated;
    void /* unknown type, empty encoding */ nextIndex;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ fetchingIndex;
    void /* unknown type, empty encoding */ showLandingTipsOneTime;
    void /* unknown type, empty encoding */ hasMoreBots;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ scrollEnabledIfImmersiveMode;
    void /* unknown type, empty encoding */ _loginProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _messageAdapater;
    void /* unknown type, empty encoding */ _debugService;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _voiceCallProvider;
}

- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)conversationInfosChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
