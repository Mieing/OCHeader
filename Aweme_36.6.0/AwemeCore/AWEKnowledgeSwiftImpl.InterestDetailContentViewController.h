@interface AWEKnowledgeSwiftImpl.InterestDetailContentViewController : AWEBaseListViewController <AWETabListItemViewControllerProtocol, AWEZoomTransitionOuterContextProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ cellSpacing;
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ pageContext;
}

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSectionIndex:(long long)a0 sectionController:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
