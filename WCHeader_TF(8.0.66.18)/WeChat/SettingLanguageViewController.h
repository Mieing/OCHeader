@class NSArray;

@interface SettingLanguageViewController : SettingBaseViewController {
    unsigned int m_uiCurIndex;
    unsigned int m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
}

@property (nonatomic) BOOL showInWeCheck;

- (void)initLanguageData;
- (void)viewDidLoad;
- (void)reportSwitchSucceed;
- (void)cancel;
- (void)save;
- (void)doChangeLanguage;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
