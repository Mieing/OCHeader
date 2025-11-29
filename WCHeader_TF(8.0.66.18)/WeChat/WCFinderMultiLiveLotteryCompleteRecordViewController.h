@class NSData, WCTimeLineFooterView, NSString, MMFinderLiveTask, UIImageView, NSMutableArray, MMTableView, UILabel;

@interface WCFinderMultiLiveLotteryCompleteRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) NSMutableArray *livePrizeRecordList;
@property (retain, nonatomic) MMTableView *lotterySelfCompleteRecordTableView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) UIImageView *nothingIconView;
@property (retain, nonatomic) UILabel *nothingLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTaskForAssistant:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutNothingViews;
- (void)layoutLotterySelfCompleteRecordTableView;
- (void)fetchCompleteRecordList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)livePrizeRecordForRowAtIndexPath:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
