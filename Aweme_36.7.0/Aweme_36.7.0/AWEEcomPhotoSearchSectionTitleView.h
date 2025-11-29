@class UILabel, CAGradientLayer, YYAnimatedImageView;

@interface AWEEcomPhotoSearchSectionTitleView : UIView

@property (retain, nonatomic) CAGradientLayer *effectGradientLayer;
@property (retain, nonatomic) YYAnimatedImageView *headIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGSize { double width; double height; } headIconSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
