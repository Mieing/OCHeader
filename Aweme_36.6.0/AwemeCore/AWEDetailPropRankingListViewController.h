@class DUXTip, NSString, AWEDetailPropTracker, AWEDetailPropViewModel, AWECodeGenStickerUserRankingModel, NSArray, UITableView, NSMutableArray, AWEDetailPropRankingLineCell, IESServiceProvider;

@interface AWEDetailPropRankingListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESServiceProvider *serviceProvider;
@property (retain, nonatomic) AWEDetailPropViewModel *stateContext;
@property (retain, nonatomic) AWEDetailPropTracker *propTracker;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) DUXTip *tipsView;
@property (retain, nonatomic) UITableView *rankingListView;
@property (retain, nonatomic) AWEDetailPropRankingLineCell *myselfCell;
@property (retain, nonatomic) AWECodeGenStickerUserRankingModel *rankingCategory;
@property (nonatomic) long long maxShow;
@property (nonatomic) long long beginFetchIndex;
@property (retain, nonatomic) NSArray *totalRankingList;
@property (retain, nonatomic) NSMutableArray *rankingList;
@property (retain, nonatomic) NSArray *awemeInfoList;
@property (retain, nonatomic) NSArray *awemeIndexList;
@property (nonatomic) double topInset;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) long long mySelfCellIndex;
@property (nonatomic) double mySelfCellOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchMoreUserDataIfNeeded;
- (void)updateBottomMyselfCellShowStatus;
- (void)configRankingCategory:(id)a0 style:(unsigned long long)a1 maxShow:(long long)a2 beginFetchIndex:(long long)a3;
- (void)setupRankingList;
- (void)setupAwemeList;
- (BOOL)scoreHasRepeat;
- (void)updateTipsShowStatus:(BOOL)a0;
- (BOOL)myselfDisplayInList;
- (void)updateRankingListViewTopInset;
- (void)fetchMoreUserDataWithBegin:(long long)a0 end:(long long)a1 completion:(id /* block */)a2;
- (void)enterVideoDetailWithClickIndex:(long long)a0;
- (void)didClickMyself;
- (void)configRankingCategory:(id)a0 beginFetchIndex:(long long)a1;
- (double)calculateTotalHeightForInlineStyle;
- (void)updateRankingListViewTopInset:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateScrollEnabled;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithServiceProvider:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)themeDidChange;

@end
