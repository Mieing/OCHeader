@class NSData, NSString, UIView, MMTableView, UIImageView, MMLoadingView, MMFinderLiveTaskId, NSMutableArray, MMFinderLiveLotteryDisplayLogic, MMFinderLiveLotteryInfo, WCTimeLineFooterView;

@interface MMLiveLotteryWinnerRecordListView : UIView <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) NSMutableArray *winnerList;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (weak, nonatomic) MMFinderLiveLotteryDisplayLogic *lotteryDisplayLogic;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) MMTableView *lotteryWinnersTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveTaskId:(id)a1 lotteryId:(id)a2 lotteryDisplayLogic:(id)a3;
- (void)initView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setExtraCellLineHidden:(id)a0;
- (void)fetchWinnerListWithCompletionBlock:(id /* block */)a0;
- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
