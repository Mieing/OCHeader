@class NSMutableArray;
@protocol AWEMemoriesPlayerFocusLayoutDelegate;

@interface AWEMemoriesPlayerFocusLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *cache;
@property (nonatomic) struct CGSize { double width; double height; } normalCellSize;
@property (nonatomic) struct CGSize { double width; double height; } centerCellSize;
@property (nonatomic) double normalMargin;
@property (nonatomic) double centerMargin;
@property (nonatomic) double contentWidth;
@property (nonatomic) BOOL enablePaging;
@property (nonatomic) double resistance;
@property (nonatomic) double bandWidth;
@property (weak, nonatomic) id<AWEMemoriesPlayerFocusLayoutDelegate> delegate;
@property (nonatomic) unsigned long long homeIndex;

- (BOOL)needUpdateLayout;
- (id)arrayOfLayoutAttributesStartFromIndex:(long long)a0 count:(long long)a1;
- (void)updateLayoutForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)distanceToPoint:(double)a0 fromCenter:(double)a1;
- (struct CGSize { double x0; double x1; })sizeAtPoint:(double)a0 withCenter:(double)a1;
- (double)integralOfFunctionWithHighValue:(double)a0 lowValue:(double)a1 bandWidth:(double)a2 fromPoint:(double)a3 toPoint:(double)a4;
- (double)valueOfFunctionWithHighValue:(double)a0 lowValue:(double)a1 bandWidth:(double)a2 atPoint:(double)a3;
- (double)currentCenterPosition;
- (long long)indexOfCurrentCenteredItem;
- (double)contentOffsetForCenteredItemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (double)itemWidth;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
