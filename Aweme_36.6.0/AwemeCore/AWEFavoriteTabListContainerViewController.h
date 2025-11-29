@class NSString, AWEFavoriteV2VCBottomFloatView;

@interface AWEFavoriteTabListContainerViewController : AWEBaseTabListViewController <AWERouterViewControllerProtocol, AWEFavoriteTabContainerProtocol, AWEFavoriteSegmentedControlDelegate>

@property (retain, nonatomic) AWEFavoriteV2VCBottomFloatView *bottomFloatView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupContainerScrollView:(id)a0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (double)topSafeAreaForTabList;
- (BOOL)enableSegmentedControlForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabItemScrollViewKeepContentOffset;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)bindViewModel;
- (BOOL)tabListEnableTabItemScrollViewBounceAtIndex:(long long)a0;
- (BOOL)adjustTabListWhenTabItemOffsetChanges;
- (void)bindEvent;
- (void)setupBottomView;
- (void)segmentedControl:(id)a0 didEndDraggingWithVisibleItems:(id)a1;
- (void)segmentedControlHasLayoutAllItems:(id)a0;
- (void)segmentedControl:(id)a0 exposedIndex:(unsigned long long)a1 isFullyExposed:(BOOL)a2;
- (void)handleFavoriteWillScroll:(id)a0;
- (void)subTabContainer:(id)a0 didSelectTabItemModel:(id)a1 selectType:(long long)a2 formerTabItemModel:(id)a3;
- (void)updateFavoriteLandingType:(unsigned long long)a0 autoLanding:(BOOL)a1;
- (void)updateBottomSpecialView:(id)a0;
- (void)updateItemStatus:(long long)a0 tabItemModel:(id)a1 selected:(BOOL)a2;
- (void)subTabContainer:(id)a0 didCreateViewController:(id)a1;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)init;
- (double)headerHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
