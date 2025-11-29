@class NSData, NSString, PrizeRecord, MMLiveLotteryCompleteInfoHeaderView, NSMutableArray, MMFinderLiveTaskId, MMUILabel, MMTableView, WCTimeLineFooterView;

@interface WCFinderSingleLiveLotteryCompleteRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) PrizeRecord *prizeRecord;
@property (retain, nonatomic) NSMutableArray *completedRecordList;
@property (retain, nonatomic) MMTableView *lotterySelfCompleteRecordTableView;
@property (retain, nonatomic) MMUILabel *lawDescriptionLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMLiveLotteryCompleteInfoHeaderView *headerView;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL isLeftBarItemCloseStyle;
@property (nonatomic) BOOL isInLive;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) MMFinderLiveTaskId *currentLiveTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0 title:(id)a1 compltedLotteryRecord:(id)a2;
- (id)initWithLiveId:(unsigned long long)a0 objectId:(unsigned long long)a1 nonceId:(id)a2 title:(id)a3 compltedLotteryRecord:(id)a4 isAssistant:(BOOL)a5 currentLiveTaskId:(id)a6;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutLotterySelfCompleteRecordTableView;
- (void)layoutLawDescriptionLabel;
- (void)updateHeaderViewLotteryRecord;
- (BOOL)fetchCompleteRecordList;
- (id)getCurrentLotteryRecordFrom:(id)a0;
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
