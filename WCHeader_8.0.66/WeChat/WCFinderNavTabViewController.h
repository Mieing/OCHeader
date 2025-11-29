@class NSString, NSArray, UICollectionView, NSMapTable;

@interface WCFinderNavTabViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderNavTabTitleViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *pages;
@property (retain, nonatomic) NSMapTable *pageMaps;
@property (nonatomic) double navTabPaddingButton;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onTitleViewSelectedIdx:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldRelayoutCollectionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewTargetFrame;
- (void)setupProperty;
- (void)installTitleView;
- (id)titleView;
- (void)installCollectionView;
- (id)getCollectionView;
- (double)collectionViewTopMargin;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (id)definePages;
- (void)reload;
- (void)_updateTitleView;
- (id)pageViewForIndexPath:(id)a0;
- (id)getCurrentPageViewController;
- (void).cxx_destruct;

@end
