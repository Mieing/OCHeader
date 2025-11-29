@interface AWEFullPageBaseContainerViewController : AWEBaseListViewController <AWEListSectionControllerDelegate, UIScrollViewDelegate, AWEShellViewControllerProtocol, AWEContainerProtocol> {
    void /* unknown type, empty encoding */ containerContext;
    void /* unknown type, empty encoding */ containerConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visibleManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monitor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollEventManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentManager;
}

+ (Class)viewModelClass;

- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)sectionControllerWillDisplay:(id)a0;
- (void)sectionControllerDidEndDisplaying:(id)a0;
- (void)sectionControllerDidExitWorkingRange:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
