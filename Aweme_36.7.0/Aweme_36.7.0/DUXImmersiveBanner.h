@class CAGradientLayer, UIImage, NSURL, BDImageView;

@interface DUXImmersiveBanner : UIView

@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) CAGradientLayer *alphaLayer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) double aspectRatio;

- (id)initWithSizeStyle:(long long)a0 image:(id)a1;
- (void)intrinsicAlphaLayer;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
