@class CALayer;

@interface MMLiveScrollGradientMaskingView : MMLiveGradientLayerView

@property (retain, nonatomic) CALayer *fadeoutLayerForBeginning;
@property (retain, nonatomic) CALayer *fadeoutLayerForEnding;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL enableFadeoutAtBeginning;
@property (nonatomic) BOOL enableFadeoutAtEnding;
@property (nonatomic) double gradientInset;
@property (nonatomic) double gradientLength;
@property (nonatomic) double gradientFadeoutLength;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;

@end
