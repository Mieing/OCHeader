@interface InteractionNoticeTabListContainerViewController : AWEBaseTabListViewController <AWEIMFansAndInteractMergedNaviProtocol, AWEInteractionNoticePageProtocol, IESSegmentedControlDelegae, AWERouterViewControllerProtocol, AWEIMMessageTabPadSplitSecondaryViewController> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listViewControllersMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTabListViewControllersMap;
    void /* unknown type, empty encoding */ currentTipsView;
    void /* unknown type, empty encoding */ isForMergedContainer;
    void /* unknown type, empty encoding */ containerViewController;
}

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (void)setupContainerScrollView:(id)a0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (void)tabListContainerScrollViewDidScroll:(id)a0;
- (void)tabListContainerDidEndScrolling:(id)a0;
- (void)segmentedControl:(id)a0 didTapAtIndex:(long long)a1;
- (double)topSafeAreaForTabList;
- (BOOL)enableSegmentedControlForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabItemScrollViewKeepContentOffset;
- (void)showNaviInContainerView:(id)a0 naviItemView:(id)a1;
- (void)didFirstTimeLoadPage;
- (void)didTapBackButton;
- (void)setMergedPageVC:(id)a0;
- (void)addLocalReadedNoticeID:(id)a0;
- (void)interactionNoticePageBeginRefreshData;
- (BOOL)autoDetectTabItemRefreshHeader;
- (unsigned long long)bizLine;
- (id)bizIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
