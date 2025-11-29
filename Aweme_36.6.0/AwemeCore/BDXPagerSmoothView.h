@class NSMutableDictionary, NSString, UIView, UIScrollView, BDXPagerSmoothCollectionView;
@protocol BDXPagerSmoothViewDataSource, BDXPagerSmoothViewDelegate;

@interface BDXPagerSmoothView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<BDXPagerSmoothViewDataSource> dataSource;
@property (retain, nonatomic) BDXPagerSmoothCollectionView *listCollectionView;
@property (retain, nonatomic) NSMutableDictionary *listDict;
@property (retain, nonatomic) NSMutableDictionary *listHeaderDict;
@property (nonatomic, getter=isSyncListContentOffsetEnabled) BOOL syncListContentOffsetEnabled;
@property (retain, nonatomic) UIView *pagerHeaderContainerView;
@property (nonatomic) double currentPagerHeaderContainerViewY;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIScrollView *currentListScrollView;
@property (nonatomic) double heightForPagerHeader;
@property (nonatomic) double heightForPinHeader;
@property (nonatomic) double heightForPagerHeaderContainerView;
@property (nonatomic) double currentListInitializeContentOffsetY;
@property (retain, nonatomic) UIScrollView *singleScrollView;
@property (nonatomic) long long defaultSelectedIndex;
@property (weak, nonatomic) id<BDXPagerSmoothViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidScroll:(id)a0;
- (void)listDidAppear:(long long)a0;
- (void)listDidDisappear:(long long)a0;
- (void)horizontalScrollDidEndAtIndex:(long long)a0;
- (long long)listIndexForListScrollView:(id)a0;
- (id)listHeaderForListScrollView:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithDataSource:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)initializeViews;

@end
