@class UIView, IESECBackgroundDescribeInfo, IESECLLDCImageView;

@interface IESECBackgroundView : IESECGradientView

@property (retain, nonatomic) IESECBackgroundDescribeInfo *backgroundInfo;
@property (retain, nonatomic) IESECLLDCImageView *backgroundImageView;
@property (retain, nonatomic) UIView *bgMaskView;

- (void)addBackgroundImage;
- (void)updateBackgroundWithBackgroundInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setImageViewContentMode:(long long)a0;

@end
