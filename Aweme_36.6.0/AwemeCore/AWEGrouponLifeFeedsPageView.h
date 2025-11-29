@class AWEGrouponLifeFeedsBodyLayout, NSString, NSMutableSet, AWEGrouponLifeFeedsSingleContainerView, AWEGrouponLifeFeedsCollectionView, AWEGrouponLifeFeedsFloatContianerView;
@protocol AWEGrouponLifeFeedsPageViewDelegate, AWEGrouponLifeFeedsPageViewDataSource;

@interface AWEGrouponLifeFeedsPageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEGrouponLifeFeedsBodyLayoutDataSource>

@property (retain, nonatomic) AWEGrouponLifeFeedsCollectionView *bodyContainer;
@property (retain, nonatomic) AWEGrouponLifeFeedsBodyLayout *bodyLayout;
@property (retain, nonatomic) AWEGrouponLifeFeedsSingleContainerView *backgroundContainer;
@property (retain, nonatomic) AWEGrouponLifeFeedsFloatContianerView *floatContainer;
@property (retain, nonatomic) NSMutableSet *cellIdentifierSet;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsPageViewDataSource> dataSource;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsPageViewDelegate> delegate;
@property (nonatomic) BOOL recognizeSimultaneouslyPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findContainerByType:(id)a0;
- (unsigned long long)numberOfItemsInBodyContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfItemsInBodyContainer:(long long)a0;
- (void)buildContainers;
- (void)buildBackgroundContainer;
- (void)buildBodyContainer;
- (void)buildFloatContainer;
- (void)reloadInContainerWithIndexPaths:(id)a0 animated:(BOOL)a1;
- (void)reloadWithIndex:(unsigned long long)a0 containerType:(id)a1 animated:(BOOL)a2;
- (void)reloadWithIndexes:(id)a0 containerType:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reload;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)prepareLayout;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
