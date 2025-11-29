@class WCFinderPrivacySettingHelper, NSString, WCTableViewSectionManager, WCTableViewManager, WCFinderContact;

@interface WCFinderMsgVC : MMUIViewController <WCFinderPrivacySettingHelperDelegate>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCTableViewSectionManager *msgSwitchSection;
@property (retain, nonatomic) WCFinderPrivacySettingHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (id)privacySettingSection;
- (void)requestReloadTableView;
- (void).cxx_destruct;

@end
