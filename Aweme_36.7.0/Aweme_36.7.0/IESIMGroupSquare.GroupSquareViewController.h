@interface IESIMGroupSquare.GroupSquareViewController : AWEBaseTabListViewController {
    void /* unknown type, empty encoding */ bindingStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageSceneName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uiTag;
    void /* unknown type, empty encoding */ segmentStickState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentedControl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentedControlMask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_refreshHeader;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (BOOL)tabContentUseMaxHeight;
- (double)topSafeAreaForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabListShouldLazyAccessTabItemViewController;
- (BOOL)tabListAddTabItemAsChildViewController;
- (id)hmdPageExtension;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
