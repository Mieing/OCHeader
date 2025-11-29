@class BDXLynxSwiperViewLayout;
@protocol BDXLynxSwiperTransformLayoutDelegate;

@interface BDXLynxSwiperTransformLayout : UICollectionViewFlowLayout {
    struct { unsigned char applyTransformToAttributes : 1; unsigned char initializeTransformAttributes : 1; } _delegateFlags;
}

@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (retain, nonatomic) BDXLynxSwiperViewLayout *layout;
@property (weak, nonatomic) id<BDXLynxSwiperTransformLayoutDelegate> delegate;

- (void)applyLinearTransformToAttributes:(id)a0;
- (void)applyTransformToAttributes:(id)a0 layoutType:(unsigned long long)a1;
- (void)initializeTransformAttributes:(id)a0 layoutType:(unsigned long long)a1;
- (void)applyLinearTransformToAttributes:(id)a0 scaleX:(double)a1 scaleY:(double)a2 alpha:(double)a3;
- (void)applyCoverflowTransformToAttributes:(id)a0 angle:(double)a1 alpha:(double)a2;
- (void)applyCoverflowTransformToAttributes:(id)a0;
- (void)applyLinearTransformToAttributes:(id)a0 translateX:(double)a1 translateY:(double)a2 scaleX:(double)a3 scaleY:(double)a4 alpha:(double)a5;
- (unsigned long long)directionWithCenter:(double)a0 size:(double)a1;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (long long)developmentLayoutDirection;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;

@end
