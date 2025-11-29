@class CAGradientLayer;

@interface AWEStudioGradientRealBorder : UIView

@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (copy, nonatomic) id /* block */ resetBorderConfigBlock;
@property (copy, nonatomic) id /* block */ resetBorderLayerBlock;

- (void)resetBorderLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
