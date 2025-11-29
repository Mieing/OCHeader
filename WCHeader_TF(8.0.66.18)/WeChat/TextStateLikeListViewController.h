@class WCTimeLineFooterView, NSString, TextStatusGetSelfLikedsResp, WCFinderAnimationLoadingView, UILabel, NSMutableArray, UITableView;

@interface TextStateLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TextStateLikeCellContentViewDelegate, MMRefreshTableFooterDelegate>

@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL isRemoteData;
@property (nonatomic) BOOL isLoadingData;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *statusID;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) TextStatusGetSelfLikedsResp *currentSelfLikedsResp;
@property (retain, nonatomic) NSMutableArray *arrInfo;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) BOOL isShowLoading;
@property (nonatomic) BOOL isDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAsHalfPageIn:(id)a0;
- (id)initWithTextStatusID:(id)a0;
- (void)startLoadigView;
- (void)stopLoadingView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)initFooterView;
- (void)initView;
- (void)initData;
- (void)loadMoreHistoryData;
- (void)onRecieveLikedsRespWithInfos:(id)a0;
- (void)onNoMoreData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)overrideUserInterfaceStyle;
- (void)onClickHeadImageWithInfo:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
