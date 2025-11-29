@class AWECyclePagerViewLayout;
@protocol AWECyclePagerTransformLayoutDelegate;

@interface AWECyclePagerTransformLayout : UICollectionViewFlowLayout {
    struct { unsigned char applyTransformToAttributes : 1; unsigned char initializeTransformAttributes : 1; } _delegateFlags;
}

@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (retain, nonatomic) AWECyclePagerViewLayout *layout;
@property (weak, nonatomic) id<AWECyclePagerTransformLayoutDelegate> delegate;

- (void)applyLinearTransformToAttributes:(id)a0 scale:(double)a1 alpha:(double)a2;
- (void)applyLinearTransformToAttributes:(id)a0;
- (unsigned long long)directionWithCenterX:(double)a0;
- (void)applyTransformToAttributes:(id)a0 layoutType:(unsigned long long)a1;
- (void)initializeTransformAttributes:(id)a0 layoutType:(unsigned long long)a1;
- (unsigned long long)directionWithCenterY:(double)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;

@end
