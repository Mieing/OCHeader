@class NSMutableArray, NSMutableSet;
@protocol AFDUserListGridPanelFlowLayoutDelegate;

@interface AFDUserListGridPanelFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *layoutAttributes;
@property (retain, nonatomic) NSMutableSet *insertedIndexPaths;
@property (retain, nonatomic) NSMutableSet *deletedIndexPaths;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (weak, nonatomic) id<AFDUserListGridPanelFlowLayoutDelegate> delegate;

+ (Class)layoutAttributesClass;

- (double)itemHeightAtIndexPath:(id)a0;
- (double)itemOffsetAtIndexPath:(id)a0;
- (id)itemHeightInfoAtIndexPath:(id)a0;
- (unsigned long long)itemCountInOneRow;
- (id)layoutRowWithContext:(id)a0;
- (id)maxItemHeightInfoWithHeightInfos:(id)a0;
- (double)itemSpacing;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)contentWidth;
- (double)itemWidth;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;

@end
