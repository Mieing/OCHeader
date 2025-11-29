@class UIButton, NSString, WCBaseKeyboardToolBar, PasswordLogic, WCAccountForgetPasswordControlLogic, WCAccountTextFieldItem, RichTextView;
@protocol WCAccountSetPasswordViewControllerDelegate;

@interface WCAccountSetPasswordViewController : WCAccountBaseViewController <ILinkEventExt, WCAccountForgetPasswordControlLogicDelegate, WCBaseInfoItemDelegate, PasswordLogicDelegate> {
    id<WCAccountSetPasswordViewControllerDelegate> m_delegate;
    PasswordLogic *m_setPasswdLogic;
    PasswordLogic *m_verifyPasswdLogic;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCAccountTextFieldItem *m_textFieldVerifyPwdItem;
    WCAccountTextFieldItem *m_textFieldFirstPwdItem;
    WCAccountTextFieldItem *m_textFieldSecondPwdItem;
    RichTextView *m_bottomView;
    UIButton *m_doneBtn;
    UIButton *m_showBtn;
    NSString *m_nsHeaderTitle;
    NSString *m_nsHeaderTip;
    NSString *m_nsTicket;
    unsigned int m_uiTicketType;
    BOOL m_bShowTip;
    BOOL m_bShow;
    unsigned long long m_scene;
}

@property (retain, nonatomic) WCAccountForgetPasswordControlLogic *forgetPwdLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFromServerControl;
- (BOOL)isVerifyScene;
- (BOOL)isChangeScene;
- (BOOL)isSetScene;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (BOOL)WCBaseInfoItemShouldBeginEditing:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)setHeaderTip:(id)a0;
- (void)setHeaderTitle:(id)a0;
- (void)setTicket:(id)a0;
- (void)setTicketType:(unsigned int)a0;
- (void)setShowTip:(BOOL)a0;
- (void)setScene:(unsigned long long)a0;
- (void)setDelegate:(id)a0;
- (void)onSecondNext;
- (id)init;
- (void)viewDidLoad;
- (BOOL)useTableView;
- (void)updateView;
- (void)useForgetPasswordSetting;
- (void)onSetPasswordBack;
- (void)onShowBtnClick;
- (void)checkEnable;
- (void)textFieldTextDidChange:(id)a0;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)verifyPasswordError:(id)a0;
- (void)verifyPasswordFail:(id)a0;
- (void)setPasswordOK:(id)a0;
- (void)setPasswordFail:(id)a0;
- (void)unknownFail:(id)a0;
- (void)doVerifyPassword;
- (void)doChangePassword;
- (void)startLoading;
- (void)stopLoading;
- (void)onWCAccountForgetPasswordControlLogic:(id)a0 continueWithTicket:(id)a1 ticketType:(unsigned int)a2 handled:(BOOL *)a3;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
