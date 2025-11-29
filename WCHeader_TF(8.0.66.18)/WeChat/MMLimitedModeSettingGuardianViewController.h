@class MMLimitedModeGuardianLogic, NSString, CContact, MMAcceptAgreementCommonHeadView, MMTableViewInfo, MMTableView, UIButton;

@interface MMLimitedModeSettingGuardianViewController : MMAcceptAgreementBaseViewController <MMLimitedModeGuardianLogicDelegate> {
    UIButton *m_operateButton;
    CContact *m_guardianContact;
    BOOL m_needReload;
    MMLimitedModeGuardianLogic *m_guardianLogic;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)viewDidAppear:(BOOL)a0;
- (void)layoutOperateButton;
- (void)reloadTableData;
- (void)makeGuardianCell:(id)a0;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)didRemoveOperateButton;
- (void)didOperateButton;
- (void)onCancelAuthorization;
- (void)didClickLeftCloseBarButton;
- (void)onUnBindTeenagerModeGuardianWithSuccess:(BOOL)a0 errMsg:(id)a1;
- (id)getViewController;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
