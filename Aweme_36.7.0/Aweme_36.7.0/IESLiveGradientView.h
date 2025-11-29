@class CAGradientLayer;

@interface IESLiveGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

@end
