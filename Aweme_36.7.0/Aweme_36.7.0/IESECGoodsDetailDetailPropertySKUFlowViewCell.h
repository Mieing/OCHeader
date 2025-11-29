@class IESECUIImageView, UIView, IESECButton;

@interface IESECGoodsDetailDetailPropertySKUFlowViewCell : IESECHorizonFlowCollectionViewCell

@property (retain, nonatomic) IESECButton *contentButton;
@property (retain, nonatomic) IESECUIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverMaskView;

- (void)configWithData:(id)a0;
- (void)updateContentWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
