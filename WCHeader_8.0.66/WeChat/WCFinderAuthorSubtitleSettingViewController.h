@class NSIndexPath, NSString, WCFinderFeedContentVM, UILabel, NSMutableArray, UITableView;

@interface WCFinderAuthorSubtitleSettingViewController : WCFinderCustomPanelSheet <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *headerTipsLabel;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadContentView;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateWithContentVM:(id)a0;
- (BOOL)isLandScape;
- (double)tableViewHeight;
- (id)tableHeaderView;
- (id)tableFooterView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
