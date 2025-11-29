@interface AWESpeCategoryKit.FeedTabListContainerViewController : AWEBaseTabListViewController <AWESpeCategoryKit.FeedListContainerLoadingApdapterProtocol, AWESpeCategoryKit.FeedTabListContainerUIApdapterProtocol, NSObject> {
    void /* unknown type, empty encoding */ tabListDelegate;
    void /* unknown type, empty encoding */ headerVC;
    void /* unknown type, empty encoding */ firstTabVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ tabListItemDataStateBind;
}

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (void)tabListContainerScrollViewDidScroll:(id)a0;
- (void)tabListContainerScrollViewWillBeginDragging:(id)a0;
- (void)tabListContainerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)tabContentUseMaxHeight;
- (void)tabListContainerScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabItemScrollViewKeepContentOffset;
- (id)createLoadingViewWithSuperView:(id)a0;
- (void)showLoadingViewWithLoadingView:(id)a0;
- (void)hideLoadingViewWithLoadingView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewControllerPosition;
- (void)updateTabViewControllerStateWithState:(long long)a0;
- (BOOL)tabListShouldLazyAccessTabItemViewController;
- (BOOL)tabListAddTabItemAsChildViewController;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
