@class NSString, NSMutableArray, UICollectionView;

@interface AWEFeedLiveTabStickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long liveScrollOffsetIndex;
@property (retain, nonatomic) NSMutableArray *cellModel;
@property (copy, nonatomic) id /* block */ didStickerCellShow;
@property (copy, nonatomic) id /* block */ didStickerCellClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshViewWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)invalidateLayout;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)visibleItems;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setupView;

@end
