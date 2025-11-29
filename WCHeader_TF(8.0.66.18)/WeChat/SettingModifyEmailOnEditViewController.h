@class MMUITextField, UIButton, MMTableView, MMAcceptAgreementCommonHeadView, MMTableViewInfo, MMUILabel;

@interface SettingModifyEmailOnEditViewController : SettingModifyEmailBaseViewController {
    double m_fKeyboardHeight;
    MMTableView *m_tableView;
    MMTableViewInfo *m_tableViewInfo;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
}

@property (retain, nonatomic) MMUILabel *emailTitleLabel;
@property (retain, nonatomic) MMUITextField *emailTextField;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL hadVerifyEmail;
@property (copy, nonatomic) id /* block */ onBindEmail;

- (id)initWithEmailLogic:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)a0;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChange;
- (void)onClickConfirmButton;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)reloadTableData;
- (id)genHeaderView;
- (id)getHeadTitle;
- (void)makeEmailEdit:(id)a0;
- (void)layoutConfirmButton;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (void).cxx_destruct;

@end
