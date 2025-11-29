@class UILabel, UIView, IESECUIImageView;
@protocol IESECPDPContainerSlideViewCellDelegate;

@interface IESECPDPContainerSlideViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) UILabel *priceStrView;
@property (retain, nonatomic) UIView *pdpMaskView;
@property (weak, nonatomic) id<IESECPDPContainerSlideViewCellDelegate> delegate;

- (id)attrString:(long long)a0;
- (void)updateWithModel:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
