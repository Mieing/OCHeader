@class MMTableView, NSArray, NSString, NSMutableDictionary, MMAcceptAgreementCommonHeadView, MMTableViewInfo, UIButton;

@interface SettingModifyAliasCheckAccountFailResultViewController : MMAcceptAgreementBaseViewController {
    UIButton *m_helpCenterButton;
    NSMutableDictionary *m_cacheHeightDic;
    double m_tableContentHeight;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSArray *m_arrCheckCanSetAliasResult;
@property (retain, nonatomic) NSString *m_ssesionID;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)layoutHelpCenterButton;
- (void)reloadTableData;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)makeCheckCanSetAliasResultCell:(id)a0 cellInfo:(id)a1;
- (void)OnSettingAccountModifyAliasHelpCenter;
- (void)onBackButtonClicked:(id)a0;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
