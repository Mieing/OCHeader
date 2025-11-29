@class NSMutableDictionary;
@protocol MJPrecisionPickerViewLayoutDelegate;

@interface MJPrecisionPickerViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableDictionary *labelLayoutAttributesCache;
@property (nonatomic) double labelHeight;
@property (weak, nonatomic) id<MJPrecisionPickerViewLayoutDelegate> delegate;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
