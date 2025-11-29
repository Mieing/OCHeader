@class CAGradientLayer, NSString, LOTAnimationView, UILabel, UIView, IESECUIImageView;

@interface IESECPDPContainerSlideViewSpeakingView : UIView

@property (retain, nonatomic) LOTAnimationView *livingLottieView;
@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) id /* block */ clickCallback;

- (void)updateSpeakingGood:(id)a0 productID:(id)a1;
- (void)clickPopView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 productID:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
