@interface AWEKnowledgeSwiftImpl.InterestDetailPhotoViewController : AWEBaseListViewController <UIScrollViewDelegate, AWETabListItemViewControllerProtocol, AWEZoomTransitionOuterContextProvider> {
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ loadingToast;
    void /* unknown type, empty encoding */ dialog;
}

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)sectionControllerClassArray;
- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSectionIndex:(long long)a0 sectionController:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupCollectionView:(id)a0;

@end
