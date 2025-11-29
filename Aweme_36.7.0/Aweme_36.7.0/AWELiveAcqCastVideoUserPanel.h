@class AWELiveAcqCastVideoLikeController, NSNumber, NSArray, AWELiveAcqCastVideoRecommendController, NSString, AWELiveAcqSlidingTabbarView, AWELiveAcqCastLiveStreamController, UICollectionView, AWELiveAcqSlidingViewController, AWELiveAcqCastVideoPostController;

@interface AWELiveAcqCastVideoUserPanel : AWELiveAcqCastVideoBasePanel <AWEUserProfileTabVCDelegate, AWESlidingViewControllerDelegate>

@property (retain, nonatomic) AWELiveAcqCastLiveStreamController *liveStreamVC;
@property (retain, nonatomic) UICollectionView *switchCollectionView;
@property (retain, nonatomic) NSArray *titlesArray;
@property (retain, nonatomic) NSArray *tabTypesArray;
@property (retain, nonatomic) AWELiveAcqSlidingTabbarView *tabView;
@property (retain, nonatomic) AWELiveAcqSlidingViewController *slidingVC;
@property (retain, nonatomic) AWELiveAcqCastVideoRecommendController *recommendVC;
@property (retain, nonatomic) AWELiveAcqCastVideoPostController *postVC;
@property (retain, nonatomic) AWELiveAcqCastVideoLikeController *likeVC;
@property (retain, nonatomic) NSNumber *favoriteCount;
@property (retain, nonatomic) NSNumber *awemeCount;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) unsigned long long lastSelectedSlidingTab;
@property (nonatomic) double selectionLineSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)userProfileTabVC:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (id)userForTabVC;
- (double)userProfileTabHeight;
- (void)setProfileShowTab:(long long)a0;
- (long long)tabTypeAtIndex:(long long)a0;
- (void)onClickBack;
- (void)updateFavoriteTabIcon:(long long)a0;
- (id)p_tabVCForType:(long long)a0;
- (long long)indexForVCType:(long long)a0;
- (void).cxx_destruct;
- (double)headerHeight;
- (void)setupUI;
- (long long)currentTab;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
