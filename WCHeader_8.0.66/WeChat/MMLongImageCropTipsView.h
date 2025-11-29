@class UIImageView, CAGradientLayer, MMUILabel;

@interface MMLongImageCropTipsView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *tipsLabel;

- (void)setupSubviewsWithIconImage:(id)a0 labelText:(id)a1 gradientLayerLocations:(id)a2 gradientLayerColors:(id)a3;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
