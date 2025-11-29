@class MMLimitedModeGuardianLogic, NSString, CContact, MMAcceptAgreementCommonHeadView, MMTableViewInfo, MMTableView, UIButton;

@interface MMLimitedModeSettingGuardianAcceptViewController : MMAcceptAgreementBaseViewController <MMLimitedModeGuardianLogicDelegate> {
    UIButton *m_operateButton;
    CContact *m_wardUserContact;
    MMLimitedModeGuardianLogic *m_guardianLogic;
    BOOL m_isHadGuardianAccept;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSString *m_nsGuardianTicket;
@property (retain, nonatomic) NSString *m_nsWardUserName;
@property (nonatomic) unsigned long long bindScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)viewDidAppear:(BOOL)a0;
- (void)layoutOperateButton;
- (void)reloadTableData;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)didOperateButton;
- (void)didClickLeftCloseBarButton;
- (void)onBindTeenagerModeGuardianWithSuccess:(BOOL)a0 errMsg:(id)a1;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
