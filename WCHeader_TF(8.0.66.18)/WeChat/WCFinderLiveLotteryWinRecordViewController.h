@class NSData, NSString, MMFinderLiveTask, WCFinderLivePageStayReporter, MMFinderLiveTaskId, NSMutableArray, MMTableView, WCTimeLineFooterView;

@interface WCFinderLiveLotteryWinRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) NSMutableArray *winRecordList;
@property (retain, nonatomic) MMTableView *lotterySelfWinRecordTableView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int supportMultiType;
@property (retain, nonatomic) WCFinderLivePageStayReporter *stayReporter;
@property (nonatomic) BOOL fetchRecordInAllLives;
@property (nonatomic) BOOL isPushed;
@property (nonatomic) int fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutLotterySelfWinRecordTableView;
- (BOOL)fetchWinRecordList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)pushMilestoneLotteryAtIndexPath:(id)a0;
- (void)pushCustomeLotteryAtIndexPath:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)reportLotteryRecord:(id)a0 isExpose:(BOOL)a1;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
