@interface FlowKit.FlowInstructionPanelController : FlowCommon.FlowBaseViewController <UITextViewDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ sendCompletion;
    void /* unknown type, empty encoding */ dismissCompletion;
    void /* unknown type, empty encoding */ _sendMessageProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _voiceInputProvider;
    void /* unknown type, empty encoding */ _pushProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ extraTrackParams;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ actionBarDataHandler;
    void /* unknown type, empty encoding */ inputModeManager;
    void /* unknown type, empty encoding */ keyboardFrame;
    void /* unknown type, empty encoding */ isAppearing;
    void /* unknown type, empty encoding */ isAppeared;
    void /* unknown type, empty encoding */ imageAttachment;
    void /* unknown type, empty encoding */ customPromptContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceInputModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputPanelContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSpacer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageInputView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_instructionView;
}

- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleSendButton;
- (void)handleTapBackground;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)handleKeyboardState:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
