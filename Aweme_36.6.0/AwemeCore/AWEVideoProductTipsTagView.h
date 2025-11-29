@class NSString, CAShapeLayer, UILabel, NSAttributedString;

@interface AWEVideoProductTipsTagView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (copy, nonatomic) NSString *textInfo;
@property (copy, nonatomic) NSAttributedString *attributedStringTextInfo;

- (void)reloadBackground;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
