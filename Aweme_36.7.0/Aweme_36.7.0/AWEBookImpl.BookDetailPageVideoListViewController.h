@interface AWEBookImpl.BookDetailPageVideoListViewController : AWEBaseListViewController <UIScrollViewDelegate, AWEListSectionControllerDelegate, AWETabListItemViewControllerProtocol, AWEZoomTransitionOuterContextProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ selectItemIndex;
    void /* unknown type, empty encoding */ listContext;
    void /* unknown type, empty encoding */ videoDetialViewController;
}

+ (Class)viewModelClass;

- (void)appWillResignActiveWithNotice:(id)a0;
- (void)appDidBecomeActiveWithNotice:(id)a0;
- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (long long)workingRangeSize;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (BOOL)zoomTransitionWantsTabBarBeStatic;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionShouldScreenSliced;
- (double)tabbarAnimationDuration;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
