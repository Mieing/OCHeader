@class UIColor, NSArray, CAShapeLayer, CMCRecordMode, NSString, NSNumber;

@interface CMCLightningRecordRingView : UIView <CMCLightningRecordAnimatable>

@property (retain, nonatomic) CAShapeLayer *whiteLayer;
@property (retain, nonatomic) CAShapeLayer *rangeLayer;
@property (nonatomic) double startLimit;
@property (nonatomic) double endLimit;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) NSArray *marks;
@property (nonatomic) BOOL hiddenWhenNotNormalState;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (nonatomic) long long state;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)addRangeIndicatorWithStart:(float)a0 end:(float)a1;
- (BOOL)p_longtailShootAnimationEnabled;
- (id)p_redColor;
- (void)resetNormalState;
- (id)normalPath;
- (void)resetWhitePath;
- (double)convertProgress:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)shapeLayer;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)addSeparator:(double)a0;
- (id)recordingPath;

@end
