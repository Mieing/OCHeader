@class NSArray, NSString, UICollectionView;
@protocol MJPageViewDataSource, MJPageViewInnerProtocol;

@interface MJPageViewContentView : MMUIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MJPageViewItemProtocol>

@property (retain, nonatomic) NSArray *itemVCs;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL bScrollEnable;
@property (weak, nonatomic) id<MJPageViewDataSource> dataSource;
@property (weak, nonatomic) id<MJPageViewInnerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)reloadData;
- (void)changeSelectedFrom:(long long)a0 to:(long long)a1 animated:(BOOL)a2;
- (void)invalidateLayout;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void).cxx_destruct;

@end
