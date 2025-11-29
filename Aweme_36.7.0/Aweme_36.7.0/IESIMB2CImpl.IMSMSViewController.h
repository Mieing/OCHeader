@interface IESIMB2CImpl.IMSMSViewController : UIViewController <AWERouterViewControllerProtocol, AWEIMInAppPushProtocol, IESIMConversationB2CSMSService, IESIMSheetVCDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ contanerSheet;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ encryptedMobileNumber;
    void /* unknown type, empty encoding */ leftRightWidth;
    void /* unknown type, empty encoding */ titleLeft;
    void /* unknown type, empty encoding */ placeHolderColor;
    void /* unknown type, empty encoding */ numberColor;
    void /* unknown type, empty encoding */ textFieldMaxLength;
    void /* unknown type, empty encoding */ verifyCodeMinLength;
    void /* unknown type, empty encoding */ verifyCodeMaxLength;
    void /* unknown type, empty encoding */ hasSend;
    void /* unknown type, empty encoding */ notLayoutAnimation;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ routerParams;
    void /* unknown type, empty encoding */ keyBoardShow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_smsContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_regionBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_changeBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendVerifyCodeBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verifyTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timerLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verticalLineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFieldContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberTextFieldView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verifyTextFieldView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_confirmButton;
}

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowInnerPush;
- (double)getContainerSheetHeight;
- (double)getHighContainerSheetHeight;
- (BOOL)currentStateIsVerify;
- (void)setSheetContainer:(id)a0;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)keyboardWillChangeFrameNotificationWithNotification:(id)a0;
- (void)didClickSheetView;
- (void)onThemeReloadWithNotification:(id)a0;
- (void)confirmBtnClick;
- (void)sendVerifyBtnClick;
- (void)changeBtnClick;
- (void)keyboardWillhide:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
