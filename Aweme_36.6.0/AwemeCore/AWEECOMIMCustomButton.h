@class NSArray, CAGradientLayer;

@interface AWEECOMIMCustomButton : UIButton

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) double space;
@property (nonatomic) struct CGSize { double width; double height; } fixedImageSize;
@property (nonatomic) BOOL loading;
@property (copy, nonatomic) NSArray *gradientColors;

- (void)startRotateAnimation;
- (void)stopRotateAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
