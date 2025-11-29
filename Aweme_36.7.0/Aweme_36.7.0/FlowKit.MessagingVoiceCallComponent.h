@interface FlowKit.MessagingVoiceCallComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMBotServiceDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _voiceCallProvider;
    void /* unknown type, empty encoding */ _banComponent;
    void /* unknown type, empty encoding */ _actionBarComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _isDoraMode;
    void /* unknown type, empty encoding */ _isRecording;
    void /* unknown type, empty encoding */ _videoDidGuide;
    void /* unknown type, empty encoding */ hasShowGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationVoiceCallButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallRedDot;
    void /* unknown type, empty encoding */ isVideoCallGuideShowing;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
