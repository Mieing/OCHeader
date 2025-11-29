@class WCTableViewManager, WCTableViewSectionManager;

@interface WCFinderLivePersonalCenterWXMentionSwitchVC : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCTableViewSectionManager *msgSwitchSection;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (void)showMentionSwitchChanged:(id)a0;
- (void)reportSwitchWithActionType:(unsigned long long)a0 switchOn:(unsigned long long)a1;
- (void).cxx_destruct;

@end
