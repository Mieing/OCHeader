@class CAGradientLayer, UIColor, UIImageView, NSString, UILabel, UIImage;

@interface AWELiveAcqGradientBackgroundLabelView : UIView

@property (retain, nonatomic) UILabel *tagContentLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (copy, nonatomic) NSString *tagContentString;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *textColor;

- (void)showTagView;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
