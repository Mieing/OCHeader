@class UIColor;

@interface MMGlowingLabel : UILabel

@property (nonatomic) double glowSize;
@property (retain, nonatomic) UIColor *glowColor;
@property (nonatomic) double innerGlowSize;
@property (retain, nonatomic) UIColor *innerGlowColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
