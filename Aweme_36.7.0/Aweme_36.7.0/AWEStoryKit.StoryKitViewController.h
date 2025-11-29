@interface AWEStoryKit.StoryKitViewController : AWEBaseListViewController <AWEShellViewControllerProtocol, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_controllerManager;
    void /* unknown type, empty encoding */ isFirstFrameRecorded;
    void /* unknown type, empty encoding */ isVCActive;
    void /* unknown type, empty encoding */ currentIndex;
}

+ (Class)viewModelClass;

- (long long)workingRangeSize;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listWillReloadDataWithCollectionView:(id)a0;
- (void)onThemeChanged;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
