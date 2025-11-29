@class MMTableView, WCTimeLineFooterView, NSString, MMUIView, NSData, NSMutableArray, MMUILabel;

@interface WCFinderHistoryLiveListViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMFinderHistoryLiveInfoCellDelegate>

@property (retain, nonatomic) NSMutableArray *historyLiveInfoList;
@property (retain, nonatomic) MMTableView *historyLiveListTableView;
@property (retain, nonatomic) MMUILabel *tipsDescriptionLabel;
@property (retain, nonatomic) MMUIView *descriptionLeftLine;
@property (retain, nonatomic) MMUIView *descriptionRightLine;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) NSString *anchorFinderUserName;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL isSelfAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnchor:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)layoutUI;
- (void)layoutHistoryLiveListTableView;
- (void)layoutTipsDescriptionLabel;
- (void)fetchHistoryLiveList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
