@interface AWELiveSwiftImpl.AWEFeedLiveTabOperationPageViewController : AWEBaseListViewController <UIScrollViewDelegate, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ emptyView;
    void /* unknown type, empty encoding */ playTimer;
    void /* unknown type, empty encoding */ firstLivePlayIndex;
    void /* unknown type, empty encoding */ secondLivePlayIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageBackground;
}

- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)applicationDidBecomeActive;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)applicationWillResignActive;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)setupCollectionView:(id)a0;

@end
