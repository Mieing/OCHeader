@class NSString, MMAcceptAgreementCommonHeadView, MMWebViewController, SettingModifyAliasLogic, UIButton;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasProtocolViewController : MMAcceptAgreementBaseViewController <SettingModifyAliasLogicDelegate, MMWebViewDelegate, SettingModifyAliasViewControllerDelegate, MMCopyLabelDelegate, SettingModifyAliasProtocolHeadViewDelegate> {
    UIButton *m_modifyAliasButton;
    SettingModifyAliasLogic *m_modifyAliasCheckAccountLogic;
    MMWebViewController *m_webViewController;
    NSString *m_checkCanSetAliasTicket;
    NSString *m_setAliasHumanFaceTicket;
    NSString *m_ssesionID;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
}

@property (weak, nonatomic) id<SettingModifyAliasViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutModifyAliasButton;
- (void)OnSettingAccountModifyAlias;
- (void)onBackButtonClicked:(id)a0;
- (void)reportSettingAccountModifyAlias:(id)a0 withResult:(unsigned int)a1;
- (void)onCheckCanSetAlias:(id)a0 verifyType:(unsigned int)a1 verifyUrl:(id)a2 ticket:(id)a3 withResult:(unsigned int)a4 errorMsg:(id)a5;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)pushResultViewControllerWithTicket;
- (void)onSettingModifyAliasSuccess;
- (void)onHeadViewTitleLabelLongPress:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)copyText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (void).cxx_destruct;

@end
