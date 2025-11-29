@class MMTableViewInfo;

@interface PersonalInfoAndAuthorizationViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

+ (id)getAdManageUrl;

- (void)viewDidLoad;
- (void)reloadTableData;
- (id)getTailView;
- (void)showSystemAuthorizationPresentView;
- (void)showPersonalizedAdsManagementView;
- (void)showPersonalInfoExport;
- (void)showAppAuthManagementView;
- (void)showAgreementWebviewWithUrl:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
