@class NSString, UILabel, MMTableViewInfo;

@interface MMShowHelpViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_userName;
    UILabel *m_labelProduct;
    BOOL m_bFullVersion;
    BOOL m_clearLocalInfo;
}

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showUploadLogView;
- (void)showUploadStackView;
- (void)showRecoverView;
- (void)onShowClearInitMark;
- (void)onShowRecoverAPNSToken;
- (void)clearInitMark;
- (void)showMemStat;
- (void)onExitApp;
- (void)reloadTableData;
- (void)onTestFastList;
- (id)getHeaderView;
- (void)updateProduct;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)onBack;
- (void).cxx_destruct;

@end
