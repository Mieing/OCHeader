@class NSArray;

@interface SettingTranslateLanguageViewController : SettingBaseViewController {
    unsigned int m_uiCurIndex;
    unsigned int m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
}

@property (nonatomic) int scene;
@property (copy, nonatomic) id /* block */ onTranslateLanguageChangedBlock;
@property (retain, nonatomic) id userData;

- (id)init;
- (void)initLanguageData;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (id)currentSelectDisplayName;
- (void)cancel;
- (void)save;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
