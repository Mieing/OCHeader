@class AWEDetailServiceProvider, AWEDetailNewStyleShootButton, DUXVacantView, UIButton;

@interface AWEDetailTrendFullViewController : AWEDetailFullViewController {
    AWEDetailServiceProvider *_serviceProvider;
}

@property (retain, nonatomic) AWEDetailNewStyleShootButton *collectButton;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *oneClickFilmButton;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *materialFollowShootButton;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *aiCreationButton;
@property (retain, nonatomic) UIButton *trendsActivityEntryButton;
@property (retain, nonatomic) DUXVacantView *errorView;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupInjectServiceOnInit;
- (void)handleDetailInfoFetchStateChange;
- (void)handleAwemeListInitFetchStatusChange;
- (BOOL)shouldUseUnifyStyleErrorView;
- (void)showEmptyAwemeList;
- (BOOL)needAmendEmptyAwemeListView;
- (void)setAwemeModelForViewModel:(id)a0 trackDict:(id)a1;
- (double)awemeListSectionOffsetY;
- (id)placeHolderNaviBarObject;
- (void)updateCollectState:(id)a0;
- (void)onAICreationButtonClicked:(id)a0;
- (void)onMaterialFollowShootButtonClicked:(id)a0;
- (BOOL)shouldShowAICreationEntrance;
- (void)setupDuetButtonStyle;
- (void)addTrendsActivityEntryInNavigationBar:(id)a0 resouceInfoModel:(id)a1;
- (void)goToActivityPage;
- (void)setupMaterialFollowShootButtonLayoutWithPlaceholderIcon:(id)a0 iconTransformer:(id)a1;
- (void)updateCollectButtonWithCollected:(BOOL)a0;
- (double)sectionControllersTotalHeightWithObjectList:(id)a0;
- (void)showToastForNoMusic;
- (void)preloadResourceIfNeededWithSchema:(id)a0;
- (void)setupBottomButton;
- (void)onCollectButtonClicked:(id)a0;
- (long long)transferIndexFromInnerToPanel:(long long)a0 withStartIndex:(long long)a1;
- (id)generateAICreationButtonWithTitle:(id)a0;
- (void)setupAICreationButtonStyle;
- (BOOL)needShowDuetEntrance;
- (BOOL)needShowOneClickFilmEntrance;
- (void)updateOneClickFilmButtonLayout;
- (void)onOneClickFilmButtonClicked:(id)a0;
- (void)updateCollectButtonLayout;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)serviceProvider;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
