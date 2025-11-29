@class MMTableView, NSString, NSData, MMFinderLiveTaskId, NSMutableArray, WCTimeLineFooterView;

@interface MMFinderLiveVoteHistoryViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) WCTimeLineFooterView *loadMoreFooterView;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableArray *historyVotes;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)viewDidLoad;
- (void)initNavBar;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (id)createTableFooterView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)fetchMoreData;
- (void)onBackButtonClicked;
- (void).cxx_destruct;

@end
