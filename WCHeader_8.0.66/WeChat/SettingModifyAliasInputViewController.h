@class UIFont, NSString, MMUITextField, SettingModifyAliasLogic, MMTableViewInfo, UIButton, MMAcceptAgreementCommonHeadView, MMUILabel, MMTableView;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasInputViewController : MMAcceptAgreementBaseViewController <UITextFieldDelegate, SettingModifyAliasLogicDelegate, SettingModifyAliasViewControllerDelegate> {
    UIButton *m_forgetPasswordButton;
    MMUITextField *m_tfAlias;
    UIButton *m_makeSureBtn;
    double m_fKeyboardHeight;
    SettingModifyAliasLogic *m_settingModifyAliasLogic;
    MMUILabel *m_aliasTitleView;
    UIFont *m_titleFont;
    UIFont *m_contentFont;
    UIFont *m_aliasFont;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (nonatomic) long long m_modifyAliasFromSceneType;
@property (retain, nonatomic) NSString *m_checkCanSetAliasTicket;
@property (retain, nonatomic) NSString *m_setAliasPwdTicket;
@property (retain, nonatomic) NSString *m_setAliasHumanFaceTicket;
@property (retain, nonatomic) NSString *m_ssesionID;
@property (weak, nonatomic) id<SettingModifyAliasViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)initData;
- (void)viewWillAppear:(BOOL)a0;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initMakeSureBtn;
- (void)initAliasEdit;
- (void)initAliasTitleView;
- (void)onAliasShowKeyBoard;
- (void)onAliasHideKeyBoard;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)updateWordCount:(id)a0;
- (void)reloadTableData;
- (id)genHeaderView;
- (void)makeAliasEdit:(id)a0;
- (void)OnMakeSureClick;
- (void)onBackButtonClicked:(id)a0;
- (void)OnCheckAliasValidWithResult:(unsigned int)a0 retCode:(int)a1 errorMsg:(id)a2;
- (void)onSettingModifyAliasSuccess;
- (id)getViewController;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
