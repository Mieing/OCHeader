@class IESLiveWebpLoadingView, IESLiveTableViewCellDisplayTrackHelper, NSArray, NSString, UIImageView, IESLivePKInviteeListItemSection, UITableView, IESLivePKNormalPanelViewModel, UILabel;

@interface IESLivePKRecommendPanelView : IESLivePKRecommendTabBasePanelView <UITableViewDelegate, UITableViewDataSource, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) double tempOffset;
@property (retain, nonatomic) IESLivePKInviteeListItemSection *itemSection;
@property (copy, nonatomic) NSArray *multiLinkItemList;
@property (copy, nonatomic) NSArray *dynamicSectionList;
@property (retain, nonatomic) IESLivePKNormalPanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (void)createNormalSectionHeader:(long long)a0 containerView:(id)a1;
- (void)didClickFilterButton;
- (void)didSelectRecommendSelectType:(int)a0;
- (void)recordTableViewLoadDuration;
- (void)updateShowState;
- (void)showRecommendFilterPopupView;
- (id)recommendSectionRequestID;
- (id)initWithDIContext:(id)a0 viewModel:(id)a1 dynamicSectionList:(id)a2;
- (void)trackDisplayedCells;
- (id)getPanGestureRecognizer;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupViews;
- (void)updateData;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
