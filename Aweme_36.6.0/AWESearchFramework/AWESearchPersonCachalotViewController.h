@class NSString, AWESearchPersonCachalotDataController, AWESearchUtility;

@interface AWESearchPersonCachalotViewController : AWESearchResultVerticalBaseViewController

@property (nonatomic) BOOL lastDragDidTriggerHeaderTopChange;
@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) double initContentOffsetY;
@property (nonatomic) BOOL headerViewIsFloating;
@property (copy, nonatomic) NSString *gsType;
@property (retain, nonatomic) AWESearchPersonCachalotDataController *personDataController;
@property (retain, nonatomic) AWESearchUtility *searchUtility;
@property (retain, nonatomic) NSString *searchUserId;

+ (id)searchRegularPingFangFont:(double)a0;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)tabConfig;
- (void)feedDidScroll:(id)a0;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 animated:(BOOL)a4 completion:(id /* block */)a5;
- (void)searchMiddleViewControlleWillShow;
- (id)generateControllerContext;
- (void)changeSearchBarText:(id)a0;
- (void)hideBlankView;
- (id)customEnterFrom;
- (id)customContainerConfig;
- (Class)customDataControllerClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customContentInsets;
- (id)customOuterDataModels;
- (void)customEmptyResponseCompletion:(id /* block */)a0 withParams:(id)a1 isLoadMore:(BOOL)a2;
- (BOOL)isSupportFilterViews;
- (void)customAddExtraParamsToTrackSearchEventWithBuilder:(id)a0;
- (void)updateFloatingHeaderTop:(double)a0 animated:(BOOL)a1;
- (void)p_handleFloatingHeaderTopChangeWithScrollView:(id)a0;
- (void)processGuideSearch;
- (void)adjustContentInset;
- (void)configFilter;
- (void)trackGuidSearchTrendingShowWithEventName:(id)a0;
- (void)handleGSWordSelectedWithIndex:(long long)a0;
- (id)currentSubtabName;
- (id)currentSearchUserId;
- (id)getCurrentGsType;
- (void)resetGuideSearch;
- (void)changeViewStateWithParams:(id)a0;
- (id)getCurrentGsWord;
- (void)shouldShowFilterView:(BOOL)a0;
- (void)trackPageEmptyStateWithEventName:(id)a0;
- (id)p_getAweui_emptySearchPageConfig;
- (id)extraParamsForFloatTrackerContextTrack;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
