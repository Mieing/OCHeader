@class WCTableViewManager, WCTableViewSectionManager;

@interface WCFinderWXMentionSwitchViewController : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCTableViewSectionManager *msgSwitchSection;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (void)showLikeMentionSwitchChanged:(id)a0;
- (void)showCommentMentionSwitchChanged:(id)a0;
- (void).cxx_destruct;

@end
