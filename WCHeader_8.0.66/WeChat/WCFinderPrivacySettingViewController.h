@class WCFinderContact, WCFinderPrivacySettingHelper, NSString, WCFinderPersonalSettingParams;

@interface WCFinderPrivacySettingViewController : WCFinderWCTableViewManagerVC <WCFinderPrivacySettingHelperDelegate>

@property (retain, nonatomic) WCFinderPersonalSettingParams *params;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) WCFinderPrivacySettingHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 params:(id)a1;
- (void)viewDidLoad;
- (void)updateTitle;
- (void)finderUserPrepareUpdate:(id)a0;
- (int)feedViewControllerScene;
- (void)requestReloadTableView;
- (void)onBuildTables;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
