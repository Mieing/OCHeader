@class CAGradientLayer, NSString, NSArray, CAShapeLayer, CALayer;

@interface AWEECBorderElement : LynxUI

@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSArray *borderRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *rectMask;

+ (id)__lynx_prop_config__390;
+ (id)__lynx_prop_config__441;
+ (id)__lynx_prop_config__512;
+ (id)__lynx_prop_config__563;

- (void)layoutDidFinished;
- (void)border_color:(id)a0 requestReset:(BOOL)a1;
- (void)border_radius:(id)a0 requestReset:(BOOL)a1;
- (void)border_width:(double)a0 requestReset:(BOOL)a1;
- (void)animation_duration:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
