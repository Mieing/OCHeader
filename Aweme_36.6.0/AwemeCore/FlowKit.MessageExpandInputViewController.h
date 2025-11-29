@protocol UIViewControllerTransitioningDelegate;

@interface FlowKit.MessageExpandInputViewController : FlowCommon.FlowBaseViewController <UITextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ immersiveModeEnable;
    void /* unknown type, empty encoding */ immersiveModeColor;
    void /* unknown type, empty encoding */ currentKeyboardDidHidden;
    void /* unknown type, empty encoding */ keyboardFrame;
    void /* unknown type, empty encoding */ readyToScrollToBottom;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioUseVoiceToComplete;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteContentStyle;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualEffectView;
    void /* unknown type, empty encoding */ shrinkButton;
    void /* unknown type, empty encoding */ currentDismissPercentComplete;
    void /* unknown type, empty encoding */ bottomGradientLayerHeight;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteDummyTextView;
    void /* unknown type, empty encoding */ gradientContainerView;
    void /* unknown type, empty encoding */ bottomGradientLayer;
    void /* unknown type, empty encoding */ inputPlaceholder;
    void /* unknown type, empty encoding */ sendButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceAutoCompleteButton;
    void /* unknown type, empty encoding */ meterNum;
    void /* unknown type, empty encoding */ useVoiceToCompleteStatus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionInstance;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (void)voiceAutoCompleteAction:(id)a0;
- (void)handleDidEnterBackground:(id)a0;
- (void)deviceOrientationDidChange;
- (void)handleKeyboardNotification:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textView:(id)a0 willPresentEditMenuWithAnimator:(id)a1;
- (void)textViewDidChange:(id)a0;
- (void)shrinkButtonDidClick:(id)a0;
- (void)sendButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
