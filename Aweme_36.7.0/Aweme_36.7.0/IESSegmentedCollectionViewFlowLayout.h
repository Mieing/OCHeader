@class NSArray;

@interface IESSegmentedCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL fixItemSpacing;
@property (nonatomic) BOOL optimizeFixItemSpacing;
@property (copy, nonatomic) NSArray *segmentedItemArray;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
