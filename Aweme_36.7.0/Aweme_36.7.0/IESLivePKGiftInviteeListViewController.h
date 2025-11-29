@class IESLiveWebpLoadingView, NSString, IESLivePKNormalPanelViewModel, IESLiveTableViewCellDisplayTrackHelper, UIView, UITableView;
@protocol IESHYContainerProtocol;

@interface IESLivePKGiftInviteeListViewController : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource, IESHYHybridViewLifecycleProtocol, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridTopBanner;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (nonatomic) BOOL isDidFirstAppear;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (weak, nonatomic) IESLivePKNormalPanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (BOOL)hasHeaderForSection:(long long)a0;
- (void)onClickFriendSection;
- (void)createNormalSectionHeader:(long long)a0 containerView:(id)a1;
- (void)didClickFilterButton;
- (void)didSelectRecommendSelectType:(int)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
