@class NSString, SettingModifyAliasLogic, WCAgreementCheckBox, MMUIView, UIButton, MMAcceptAgreementCommonHeadView, MMUILabel, MMUIButton;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasMakeSurelViewController : MMUIHalfScreenViewController <SettingModifyAliasLogicDelegate, SettingModifyAliasViewControllerDelegate> {
    UIButton *m_modifyAliasButton;
    WCAgreementCheckBox *m_agreementCheckBox;
    SettingModifyAliasLogic *m_settingModifyAliasLogic;
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMUILabel *m_titleView;
    MMUIButton *_closeButton;
}

@property (retain, nonatomic) NSString *m_nsAliasName;
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
- (void)viewWillAppear:(BOOL)a0;
- (void)initData;
- (long long)halfViewControllerHeight;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutCommonHeadView;
- (void)layoutAgreementCheckBox;
- (void)layoutModifyAliasButton;
- (void)OnSettingAccountModifyAlias;
- (void)OnSetAliasOK;
- (void)onClickClose:(id)a0;
- (void)OnModifyAliasWithResult:(unsigned int)a0 errorMsg:(id)a1;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)a0;
- (void).cxx_destruct;

@end
