@class AWEUILoadingView, UITableView, NSString, AWEMixVideoModel, UILabel, AWELiveAcqCastVideoMixListDataManager, NSNumber;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqMixVideoDetailListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) AWELiveAcqCastVideoMixListDataManager *dataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) UILabel *noContentTipLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL hasFirstRequested;
@property (nonatomic) BOOL jumpRequested;
@property (copy, nonatomic) NSNumber *jumpEpisode;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) double topOffset;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadmore;
- (void)addLoadMoreIfNeeded;
- (id)videoAtIndex:(long long)a0;
- (void)updateMixInfo:(id)a0;
- (BOOL)isNeedToHideCollectButton;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfVideos;

@end
