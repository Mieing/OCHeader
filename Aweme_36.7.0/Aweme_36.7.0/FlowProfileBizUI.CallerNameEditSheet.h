@interface FlowProfileBizUI.CallerNameEditSheet : FlowCommon.FlowBaseViewController <UIViewControllerTransitioningDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ trackCurrentPage;
    void /* unknown type, empty encoding */ dismissCallback;
    void /* unknown type, empty encoding */ shouldDisableSubmit;
    void /* unknown type, empty encoding */ keyboardFrame;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nicknameContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nicknameTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeIconTapArea;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeIconBackground;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitIconTapArea;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitIconBackground;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
}

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)nicknameEditingChanged:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)handleKeyboardNotification:(id)a0;
- (void)handleClose:(id)a0;
- (void)handleSubmitTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
