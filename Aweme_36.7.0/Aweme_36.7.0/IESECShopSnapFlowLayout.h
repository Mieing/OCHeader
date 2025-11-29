@class NSIndexPath;
@protocol IESECShopSnapFlowLayoutDelegate;

@interface IESECShopSnapFlowLayout : UICollectionViewFlowLayout {
    NSIndexPath *_previousCardIndexPath;
}

@property (weak, nonatomic) id<IESECShopSnapFlowLayoutDelegate> delegate;
@property (nonatomic) double criticalValue;
@property (nonatomic) double animationDuration;

- (struct CGPoint { double x0; double x1; })_contentOffsetForCenteringCellAtIndexPath:(id)a0 scrollToTop:(BOOL)a1;
- (id)_indexPathAfterIndexPath:(id)a0;
- (id)_indexPathBeforeIndexPath:(id)a0;
- (double)snapOffset:(struct CGSize { double x0; double x1; })a0 scrollToTop:(BOOL)a1 indexPath:(id)a2;
- (void)resetCardIndexPath:(id)a0;
- (BOOL)isCellInvisibleAtIndexPath:(id)a0 withTargetOffset:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
