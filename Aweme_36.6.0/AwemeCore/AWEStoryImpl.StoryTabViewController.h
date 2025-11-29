@interface AWEStoryImpl.StoryTabViewController : AWEStoryKit.StoryKitViewController <AFDCollectionViewDelegateTimeLineLayout, AWEZoomTransitionOuterContextProvider> {
    void /* unknown type, empty encoding */ user;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ isFromUserHomePage;
    void /* unknown type, empty encoding */ currentDate;
    void /* unknown type, empty encoding */ delayPresentedNav;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataController;
    void /* unknown type, empty encoding */ genreManager;
}

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForPageHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForSectionLeftTitleInSection:(long long)a2;
- (BOOL)shouldHidePageHeaderWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
