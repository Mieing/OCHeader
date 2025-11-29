@class NSMutableArray, UIView;
@protocol MMMusicFlexEditBarCellDelegate;

@interface MMMusicFlexEditBarCell : UICollectionViewCell {
    NSMutableArray *_arrImageView;
    UIView *_arrImageContainerView;
    unsigned long long _cellIndex;
    double _offset;
}

@property (weak) id<MMMusicFlexEditBarCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCellIndex:(unsigned long long)a0 bDataChanged:(BOOL)a1;
- (double)offset;
- (void)setOffset:(double)a0;
- (void)reloadThumbImageArr;
- (void)updateThumbImageArr;
- (id)genImageViewWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateWhenIsGhostCell;
- (void)updateCellAlpha;
- (void)layoutSubviews;
- (double)cellWidthPerSecond;
- (void)onTapGes:(id)a0;
- (void).cxx_destruct;

@end
