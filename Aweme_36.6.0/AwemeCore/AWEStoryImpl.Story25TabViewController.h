@interface AWEStoryImpl.Story25TabViewController : AWEStoryKit.StoryKitViewController <AWEUserProfileTabBaseMethod, AWEZoomTransitionOuterContextProvider, AFDStoryTabSyncing> {
    void /* unknown type, empty encoding */ tabConfig;
    void /* unknown type, empty encoding */ tabDelegate;
    void /* unknown type, empty encoding */ genreManager;
    void /* unknown type, empty encoding */ currentDate;
    void /* unknown type, empty encoding */ delayPresentedNav;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ storyTTL;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataController;
}

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)syncStoryList:(id)a0 storyIndexList:(id)a1;
- (id)retrieveStory;
- (void)storyTTLDidChangeWithSender:(id)a0;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)contentView;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)refreshData;
- (void)setupCollectionView:(id)a0;

@end
