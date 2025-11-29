@protocol ACCSideslipPropPickCollectionLayoutDelegate;

@interface ACCSideslipPropPickCollectionLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) id<ACCSideslipPropPickCollectionLayoutDelegate> delegate;
@property (nonatomic) long long maxItemCountInDisplay;
@property (nonatomic) BOOL enableSplitPreload;
@property (nonatomic) long long leftPreloadCount;
@property (nonatomic) long long rightPreloadCount;
@property (nonatomic) double preLoadWidth;
@property (nonatomic) long long preloadMaxCount;
@property (nonatomic) long long itemCount;

- (double)contentOffsetXWithCenterIndex:(long long)a0;
- (long long)itemCountWithWidth:(double)a0;
- (long long)centerIndexWithContentOffsetX:(double)a0;
- (void)postWillScrollToCenterIndex:(long long)a0;
- (id)sencondaryIndexesWithCenterIndex:(long long)a0;
- (double)p_widthWithItemCount:(long long)a0;
- (void).cxx_destruct;
- (void)prepareLayout;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
