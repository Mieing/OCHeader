@class MMTableViewInfo;

@interface SettingGeneralUserInterfaceViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)handleDarkMode;
- (void)handleLanguageChange;
- (void)handleTranslateLanguage;
- (void)handleFontSizeChange;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
