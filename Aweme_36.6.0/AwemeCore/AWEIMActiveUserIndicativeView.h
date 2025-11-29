@class UIView;

@interface AWEIMActiveUserIndicativeView : UIView

@property (retain, nonatomic) UIView *greenDot;
@property (nonatomic) double outerW;
@property (nonatomic) double innerW;
@property (nonatomic) BOOL isGreenDotColorChanged;
@property (nonatomic) BOOL isFromSharePanel;

+ (id)greenDotDefaultColor;

- (void)updateUIStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 innerW:(double)a1 outerW:(double)a2;
- (void)resetGreenDotFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setGreenDotColor:(id)a0;
- (void)resetGreenDotColor;
- (void)setGreenDotBackGroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
