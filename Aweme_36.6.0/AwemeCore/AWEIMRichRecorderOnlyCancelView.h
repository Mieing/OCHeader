@class CAGradientLayer;

@interface AWEIMRichRecorderOnlyCancelView : AWEIMRichRecorderAnimationView

@property (retain, nonatomic) CAGradientLayer *gradientLayer1;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelViewRect;
- (void)addOtherRecorederView;
- (void)addCancelResponseView;
- (id)gradientColorOne;
- (id)gradientColorTwo;
- (double)getBottomGradientLayerHeight;
- (void).cxx_destruct;

@end
