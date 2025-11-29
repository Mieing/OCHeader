@class UIColor, NSArray, CAShapeLayer, ACCRecordMode, UIView, NSNumber, NSString;

@interface ACCLightningRecordRingView : UIView <ACCLightningRecordAnimatable>

@property (retain, nonatomic) CAShapeLayer *beginRingLayer;
@property (retain, nonatomic) CAShapeLayer *progressBackgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressRingLayer;
@property (retain, nonatomic) UIView *storyGradientView;
@property (retain, nonatomic) CAShapeLayer *whiteLayer;
@property (retain, nonatomic) CAShapeLayer *rangeLayer;
@property (nonatomic) double startLimit;
@property (nonatomic) double endLimit;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) NSArray *marks;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (nonatomic) BOOL enableFlowControlAB;
@property (nonatomic) BOOL isFromCopy;
@property (nonatomic) long long state;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)addRangeIndicatorWithStart:(float)a0 end:(float)a1;
- (BOOL)p_longtailShootAnimationEnabled;
- (void)resetNormalState;
- (id)normalPath;
- (void)resetWhitePath;
- (double)convertProgress:(double)a0;
- (double)currentNormalLayerLineWidth;
- (double)currentProgressLayerLineWidth;
- (double)p_stable_normalLayerLineWidth;
- (double)p_cinema_normalLayerLineWidth;
- (double)recordingScale;
- (double)recordingRingLayerWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)shapeLayer;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)addSeparator:(double)a0;
- (id)recordingPath;

@end
