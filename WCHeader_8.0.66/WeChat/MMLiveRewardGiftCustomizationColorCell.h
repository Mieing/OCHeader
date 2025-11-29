@class UIColor, MMLiveGradientLayerView, UIView;

@interface MMLiveRewardGiftCustomizationColorCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) MMLiveGradientLayerView *shadingView;
@property (retain, nonatomic) UIColor *color;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
