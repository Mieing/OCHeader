@interface FlowKit.MessagingContinuousSpeakComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _messagingInputView;
    void /* unknown type, empty encoding */ _ttsToggleComponent;
    void /* unknown type, empty encoding */ _inputViewDelegateComponent;
    void /* unknown type, empty encoding */ _continuousSpeakModeComponent;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ voiceCallContainerViewModel;
    void /* unknown type, empty encoding */ isInContinuousSpeak;
    void /* unknown type, empty encoding */ hasSetupViewAction;
}

- (void)tabBarSwitchNotification:(id)a0;
- (void)tabBarMiddleButtonClickedNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
