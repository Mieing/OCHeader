@interface AWENoticeSwiftImpl.InteractionNoticeListContainerViewController : AWEBaseListViewController <UIScrollViewDelegate, AWETabListItemViewControllerProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentEditingSectionController;
    void /* unknown type, empty encoding */ emptySectionController;
}

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)configWithTabItemModel:(id)a0;
- (BOOL)tabListEnableTabItemRefreshHeader;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
