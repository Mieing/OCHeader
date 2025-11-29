@interface FlowKit.EncryptionPinCodeViewController : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ normalMode;
    void /* unknown type, empty encoding */ confirmMode;
    void /* unknown type, empty encoding */ resetMode;
    void /* unknown type, empty encoding */ turnOffMode;
    void /* unknown type, empty encoding */ confirmPin;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ forceToRoot;
    void /* unknown type, empty encoding */ safeArea;
    void /* unknown type, empty encoding */ _azerothProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ descLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ codeTextFiled;
    void /* unknown type, empty encoding */ resetButton;
    void /* unknown type, empty encoding */ inputCode;
    void /* unknown type, empty encoding */ keyboardDidShow;
    void /* unknown type, empty encoding */ codeVerifyFailedTimes;
    void /* unknown type, empty encoding */ hasTrackInput;
}

- (id)flow_trackParametersWith:(id)a0;
- (void)resetAction;
- (void)handleKeyboardNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)confirmAction;

@end
