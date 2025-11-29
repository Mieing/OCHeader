@class UILabel, NSString, CAShapeLayer;

@interface AWEPLVCardMarkLabel : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) NSString *text;

- (void)setupCorner;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
