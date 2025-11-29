@class IESLiveWebpLoadingView, UIView, IESLiveTableViewCellDisplayTrackHelper, NSString, IESLivePKSearchView, IESLiveButton, IESLiveRevenueInteractInviteViewModel, UITableView, UILabel;
@protocol IESLiveScrollRefreshService;

@interface IESLiveRevenueInteractInviteViewController : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (retain, nonatomic) IESLiveButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) IESLivePKSearchView *searchView;
@property (retain, nonatomic) UITableView *inviteListView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) id<IESLiveScrollRefreshService> scrollRefresh;
@property (retain, nonatomic) IESLiveRevenueInteractInviteViewModel *viewModel;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (nonatomic) BOOL hasBannerShowReported;
@property (nonatomic) BOOL hasSlideTracked;
@property (nonatomic) double tabAppearTimestamp;
@property (nonatomic) long long showTime;
@property (nonatomic) long long refreshTimes;
@property (nonatomic) long long fromSource;
@property (nonatomic) unsigned long long enterSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBackButtonClicked;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)onSetupNavBar:(id)a0;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (void)trackInvitePanelClose;
- (void)trackAnchorListSlide;
- (id)initWithViewModel:(id)a0 fromSource:(long long)a1 diContext:(id)a2;
- (void)fetchRecommendRivals:(id /* block */)a0;
- (void)setupHeaderTitleInSection:(long long)a0 containerView:(id)a1;
- (void)onSearchViewClicked;
- (void)initSubviews;
- (void)dismiss;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
