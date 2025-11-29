@class WCButtonListView, MMAcceptAgreementCommonHeadView;

@interface SettingModifyEmailOnVerifyViewController : SettingModifyEmailBaseViewController {
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
}

@property (retain, nonatomic) WCButtonListView *buttonListView;
@property (copy, nonatomic) id /* block */ onSendVerifyEmail;
@property (copy, nonatomic) id /* block */ onChangeEmail;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (void).cxx_destruct;

@end
