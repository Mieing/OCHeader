@interface FlowVoiceCall.VoiceCallContainerViewController : UIViewController {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ voiceCallTimeLimitTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallTimeLimit;
    void /* unknown type, empty encoding */ reminderStartTimeMinute;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallTimeLimitCountDown;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timerLabel;
    void /* unknown type, empty encoding */ currentVC;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
