@class NSString, UIImageView, UIView, UILabel;

@interface CameraScanCombineScanGoodsResultCardView : UICollectionViewCell

@property (copy, nonatomic) NSString *reqKey;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *goodsSnapshotView;
@property (retain, nonatomic) UILabel *goodsDescLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIView *highlightMaskView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)applyViewModel:(id)a0 completion:(id /* block */)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
