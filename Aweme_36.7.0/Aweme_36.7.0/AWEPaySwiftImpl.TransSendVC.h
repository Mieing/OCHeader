@interface AWEPaySwiftImpl.TransSendVC : UIViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ accInfoModel;
    void /* unknown type, empty encoding */ infoModel;
    void /* unknown type, empty encoding */ routerParams;
    void /* unknown type, empty encoding */ rightView;
    void /* unknown type, empty encoding */ teaSource;
    void /* unknown type, empty encoding */ payManager;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ conversitionId;
    void /* unknown type, empty encoding */ isGroupChat;
    void /* unknown type, empty encoding */ contentTopBaseView;
    void /* unknown type, empty encoding */ contentTopPadding;
    void /* unknown type, empty encoding */ maxLength;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maskNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amountTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amountInputView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amountPrefixLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_postscriptTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_confirmBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_line;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amountLimitTips;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fraudTips;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomWaterMark;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)backButtonClicked;
- (void)jumpUserProfileWithGesture:(id)a0;
- (void)sendTransferAccounts;
- (void).cxx_destruct;
- (void)keyboardWillShowWithNotification:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)keyboardWillHideWithNotification:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)textFieldDidChangeWithTextField:(id)a0;

@end
