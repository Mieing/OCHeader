@class MMTableView, NSString, LotteryWinnerListFooterView, NSData, MMFinderLiveLotteryRecordExpiredTipView, MMFinderLiveTaskId, NSMutableArray, LotteryWinnerListHeaderView, MMFinderLiveLotteryInfo, WCTimeLineFooterView;

@interface WCFinderLiveLotteryWinnerListViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) NSMutableArray *winnerList;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;
@property (retain, nonatomic) NSString *lotteryId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) MMTableView *lotteryWinnerTableView;
@property (retain, nonatomic) LotteryWinnerListHeaderView *headerView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) LotteryWinnerListFooterView *noMemAttendFooterView;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL enableToFinderChat;
@property (nonatomic) BOOL isInLive;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) MMFinderLiveTaskId *currentLiveTaskId;
@property (retain, nonatomic) NSString *recordUrl;
@property (nonatomic) BOOL showDownLoad;
@property (nonatomic) unsigned int isUrlExpired;
@property (retain, nonatomic) NSString *expiredWording;
@property (retain, nonatomic) MMFinderLiveLotteryRecordExpiredTipView *expiredTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0 lotteryInfo:(id)a1;
- (id)initWithLiveId:(unsigned long long)a0 objectId:(unsigned long long)a1 nonceId:(id)a2 finderUserName:(id)a3 lotteryInfo:(id)a4 inLive:(BOOL)a5 isAssistant:(BOOL)a6 currentLiveTaskId:(id)a7;
- (id)initWithLiveId:(unsigned long long)a0 objectId:(unsigned long long)a1 nonceId:(id)a2 finderUserName:(id)a3 prizeRecord:(id)a4 inLive:(BOOL)a5 isAssistant:(BOOL)a6 currentLiveTaskId:(id)a7;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutLotteryWinnerTableView;
- (void)fetchWinRecordList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)timeOutClick;
- (void)downLoadClick;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)gotoChatViewVCWithUserName:(id)a0 objectId:(unsigned long long)a1 lotteryId:(id)a2 contact:(id)a3 liveContactExtInfo:(id)a4;
- (void).cxx_destruct;

@end
