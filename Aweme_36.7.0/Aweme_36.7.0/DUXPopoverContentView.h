@class UIColor, CAShapeLayer;

@interface DUXPopoverContentView : UIView

@property (nonatomic) double duxPopoverCornerRadius;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double sharpOffset;
@property (retain, nonatomic) UIColor *popoverColor;

- (void)awe_themeDidChange:(long long)a0;
- (unsigned long long)colorStyleToSuit:(long long)a0;
- (void)setupBorderLayer;
- (id)revisedContentTintColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
