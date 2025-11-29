@class NSArray, NSString, MMFinderLiveTaskId, MMFinderLiveCreateLotteryOperationView, NSMutableArray;
@protocol MMFinderLiveCreateLotteryViewModelDelegate;

@interface MMFinderLiveCreateLotteryViewModel : NSObject <MMFinderLiveCreateLotteryOperationViewDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveCreateLotteryOperationView *createLotteryOperationView;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableArray *showArray;
@property (retain, nonatomic) NSArray *originArray;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveCreateLotteryViewModelDelegate> delegate;
@property (nonatomic) BOOL isFromStaterVC;
@property (nonatomic) long long locationId;
@property (nonatomic) long long dataVersion;
@property (nonatomic) BOOL isGameLive;
@property (nonatomic) BOOL isLotteryRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskID:(id)a0;
- (void)onUpdateLotteryIsGameMode:(BOOL)a0;
- (void)onUpdateLotteryRunning:(BOOL)a0;
- (void)onUpdateFreeGameTeamUpLottery;
- (BOOL)needFilterLotteryDataItem:(id)a0;
- (void)showCreateLotteryOperationView;
- (void)hideCreateLotteryOperationViewWithCompletion:(id /* block */)a0;
- (id)createData;
- (void)appendLotteryMethodData:(id)a0;
- (void)updateSingleModel:(id)a0;
- (long long)currentLoadDataCount;
- (double)getLotteryTableHeight;
- (void)createLotteryClick;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)actionButtonClick:(id)a0;
- (void)hoverClick:(id)a0 textItem:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)getCreateLotteryOperationView;
- (void)onLiveLotteryRecordClick;
- (id)getScrollToRowAtIndexPath;
- (BOOL)isComeFromStaterVC;
- (void).cxx_destruct;

@end
