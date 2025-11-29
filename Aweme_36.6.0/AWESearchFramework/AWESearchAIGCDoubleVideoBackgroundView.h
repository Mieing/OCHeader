@class NSString, CAGradientLayer, UIView;

@interface AWESearchAIGCDoubleVideoBackgroundView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (copy, nonatomic) NSString *root;
@property (copy, nonatomic) NSString *searchId;

- (void)addNotifications;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;

@end
