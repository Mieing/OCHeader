@class NSString, MMUITextField, PasswordLogic, MMTableViewInfo, UIButton, MMAcceptAgreementCommonHeadView, MMUILabel, MMTableView;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasCheckAccountPasswordViewController : MMAcceptAgreementBaseViewController <UITextFieldDelegate, MMAcceptAgreementResultViewControllerDelegate, PasswordLogicDelegate, SettingModifyAliasViewControllerDelegate> {
    UIButton *m_forgetPasswordButton;
    MMUITextField *m_tfPassword;
    MMUILabel *m_passwordTitleView;
    UIButton *m_makeSureBtn;
    double m_fKeyboardHeight;
    PasswordLogic *m_verifyPasswdLogic;
    NSString *m_setAliasPwdTicket;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSString *m_checkCanSetAliasTicket;
@property (weak, nonatomic) id<SettingModifyAliasViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_ssesionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initForgetPasswordButton;
- (void)initPasswordTitleView;
- (void)initMakeSureBtn;
- (void)initPasswordEdit;
- (void)onPasswordShowKeyBoard;
- (void)onPasswordHideKeyBoard;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)updateWordCount:(id)a0;
- (void)reloadTableData;
- (id)genHeaderView;
- (id)genFooterView;
- (void)makePasswordEdit:(id)a0;
- (void)OnSettingAccountCheckForgetPassWord;
- (void)OnMakeSureClick;
- (void)doVerifyPassword;
- (void)onBackButtonClicked:(id)a0;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)verifyPasswordError:(id)a0;
- (void)verifyPasswordFail:(id)a0;
- (void)onClickMakeSureActionWithViewController:(id)a0;
- (void)onSettingModifyAliasSuccess;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
