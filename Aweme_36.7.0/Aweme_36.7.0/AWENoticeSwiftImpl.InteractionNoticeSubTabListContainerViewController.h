@interface AWENoticeSwiftImpl.InteractionNoticeSubTabListContainerViewController : AWEBaseTabListViewController <AWETabListItemViewControllerProtocol, IESSegmentedControlDelegae> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listViewControllersMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listViewControllersMapByGroupID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listTypeToUnreadBadgeMap;
    void /* unknown type, empty encoding */ testHeader;
}

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (void)configWithTabItemModel:(id)a0;
- (BOOL)tabListEnableTabItemRefreshHeader;
- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (BOOL)segmentedControl:(id)a0 shouldSelectIndex:(long long)a1 fromIndex:(long long)a2;
- (void)segmentedControl:(id)a0 didTapAtIndex:(long long)a1;
- (BOOL)enableSegmentedControlForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabItemScrollViewKeepContentOffset;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
