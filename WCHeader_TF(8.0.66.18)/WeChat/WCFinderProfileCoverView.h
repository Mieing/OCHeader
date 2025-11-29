@class CAGradientLayer, UIImageView, WCFinderBGCover, CALayer;

@interface WCFinderProfileCoverView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) WCFinderBGCover *cover;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadCover;
- (void)parseCoverColor:(id)a0;
- (void)updateGradientColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
