@class CAGradientLayer, NSString, CAShapeLayer, UIColor, CALayer, NSArray;

@interface VoiceRecordTextureButtonView : MMUIView

@property (retain, nonatomic) CALayer *voiceIconMaskLayer;
@property (retain, nonatomic) CALayer *voiceIconContentLayer;
@property (nonatomic) double voiceIconCenterY;
@property (retain, nonatomic) NSString *voiceIconName;
@property (retain, nonatomic) CAShapeLayer *ovalLayer;
@property (retain, nonatomic) CAShapeLayer *ovalWaveLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *strokeLayer;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *unselectedFillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originOvalFrame;
@property (nonatomic) long long state;
@property (nonatomic) BOOL hideVoiceIcon;
@property (nonatomic) BOOL fixedVoiceIconPosition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 voiceIconName:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAllSublayers;
- (void)createAndAddAllSublayers;
- (void)layoutAllSublayers;
- (void)doExpandAnimation;
- (void)doDeselectAnimation:(BOOL)a0;
- (void)doFadeAnimation;
- (double)getOvalYFromX:(double)a0;
- (BOOL)isPointInOval:(struct CGPoint { double x0; double x1; })a0;
- (void)doWaveAnimationWithVolume:(unsigned long long)a0;
- (void).cxx_destruct;

@end
