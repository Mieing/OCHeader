@class UIImageView, UILabel;

@interface IESLiveSoloKTVGradientButton : UIButton

@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (nonatomic) long long scaleRatio;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)init;
- (id)gradientLayer;

@end
