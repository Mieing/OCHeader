@class UIFont, CAGradientLayer, NSString, CATextLayer;

@interface AWENewsAISmartFeedTrackLabelView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CATextLayer *maskTextLayer;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
