@class UINavigationController, NSString, UICollectionView, WCFinderLiveCompleteScrollView, WCFinderLiveHomePageViewController;

@interface WCFinderLiveCompletePageViewModel : NSObject <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (retain, nonatomic) WCFinderLiveCompleteScrollView *topScrollView;
@property (weak, nonatomic) WCFinderLiveHomePageViewController *homePageVC;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topScrollViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } collectionViewFrame;
@property (retain, nonatomic) UINavigationController *bottomNavViewController;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long index;
@property (nonatomic) BOOL canScroll;
@property (copy, nonatomic) id /* block */ pageChangeBlock;
@property (nonatomic) BOOL canShowHomePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)updateIndex:(long long)a0;
- (long long)getCurrentIndex;
- (void)handelEndScroll;
- (BOOL)canShowHomePageVC;
- (void)scrollViewDidScroll:(id)a0;
- (void)updatetopScrollView:(id)a0 homePageVC:(id)a1 mainCollectionView:(id)a2;
- (void)updateFrameWitTopViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bottomViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 collectionView:(id)a2;
- (void)updateBottomViewController:(id)a0 collectionView:(id)a1;
- (void)updatetopScrollViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionView:(id)a1;
- (void)updateBottomViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionView:(id)a1;
- (BOOL)collectionViewFrameSizeChanged:(id)a0;
- (void)updateUI:(BOOL)a0 collectionView:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)getItemWidth;
- (double)getItemHeight:(id)a0;
- (BOOL)isVCVisable;
- (void).cxx_destruct;

@end
