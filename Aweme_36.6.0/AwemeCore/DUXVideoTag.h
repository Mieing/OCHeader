@class NSArray, CAGradientLayer;

@interface DUXVideoTag : DUXTag

@property (retain, nonatomic) CAGradientLayer *gradient;
@property (nonatomic) double maxScale;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *backgroungGradientColors;
@property (nonatomic) long long fontWeight;

- (void)setEnlargeType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithStyle:(long long)a0 title:(id)a1;
- (void)intrinsicActionStyle;
- (double)p_intrinsicContentHeight;
- (struct CGColor { } *)colorWithDynamicColor:(id)a0;
- (BOOL)p_showIconImageView;
- (id)initWithStyle:(long long)a0 title:(id)a1 enlargeType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
