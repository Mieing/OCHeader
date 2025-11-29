@interface FlowKit.MessagingVoiceInputComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ inputViewControl;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _inputViewComponent;
    void /* unknown type, empty encoding */ _instructionModeComponent;
    void /* unknown type, empty encoding */ _scrollToBottomComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ voiceInputViewModel;
    void /* unknown type, empty encoding */ commonResultHandler;
    void /* unknown type, empty encoding */ streamResultHandlers;
    void /* unknown type, empty encoding */ currentSessionID;
    void /* unknown type, empty encoding */ voiceViewActivating;
    void /* unknown type, empty encoding */ ignoreASRCachedTask;
    void /* unknown type, empty encoding */ enterBackgroundTime;
    void /* unknown type, empty encoding */ resultHandlerLock;
    void /* unknown type, empty encoding */ viewAppearedSubject;
    void /* unknown type, empty encoding */ recordDidStartInPagerControllerAction;
    void /* unknown type, empty encoding */ continueTTSWhiteList;
    void /* unknown type, empty encoding */ _voiceInputRecordDict;
    void /* unknown type, empty encoding */ currentVoiceInputRecord;
    void /* unknown type, empty encoding */ pressTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalBackgroundStyleEnable;
    void /* unknown type, empty encoding */ voiceInputViewModelReused;
}

- (void)handleDidEnterBackground:(id)a0;
- (void)handleWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
