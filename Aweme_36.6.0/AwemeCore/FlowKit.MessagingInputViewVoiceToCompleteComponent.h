@interface FlowKit.MessagingInputViewVoiceToCompleteComponent : FlowCommon.TightCouplingComponent <UITextViewDelegate> {
    void /* unknown type, empty encoding */ inputViewControl;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _bubbleTipsComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _inputViewComponent;
    void /* unknown type, empty encoding */ _expandComponent;
    void /* unknown type, empty encoding */ _immersiveModeComponent;
    void /* unknown type, empty encoding */ _loadingAnimationComponent;
    void /* unknown type, empty encoding */ _attachmentViewComponent;
    void /* unknown type, empty encoding */ _subconversationComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _messageAdapater;
    void /* unknown type, empty encoding */ voiceInputViewModel;
    void /* unknown type, empty encoding */ currentSessionID;
    void /* unknown type, empty encoding */ asrTextContext;
    void /* unknown type, empty encoding */ meterNum;
    void /* unknown type, empty encoding */ useVoiceToCompleteType;
    void /* unknown type, empty encoding */ useVoiceToCompleteStatus;
    void /* unknown type, empty encoding */ useVoiceToCompleteExpandStatus;
    void /* unknown type, empty encoding */ timeOutEndedTimer;
    void /* unknown type, empty encoding */ timeOutEndedExpandTimer;
    void /* unknown type, empty encoding */ resetPlaceholderText;
    void /* unknown type, empty encoding */ endMethod;
    void /* unknown type, empty encoding */ isUseVoiceToComplete;
    void /* unknown type, empty encoding */ recordingDuration;
    void /* unknown type, empty encoding */ isKeyboardDidShow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionBarContainerMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeContainerMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteDummyTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioUseVoiceToComplete;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioUseVoiceToCompleteTimeOut;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteContentStyle;
}

- (void)textViewDidChange:(id)a0;
- (void)handleDidEnterBackground:(id)a0;
- (void)deviceOrientationDidChange;
- (void).cxx_destruct;
- (id)init;

@end
