@class UIView, ACCRecordMode, CAShapeLayer;

@interface ACCLightningRecordLivePhotoWhiteProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *progressRingLayer;
@property (retain, nonatomic) CAShapeLayer *progressRingBackgroundLayer;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) ACCRecordMode *recordMode;

+ (double)ringDiameterWithStyle:(long long)a0;
+ (double)ringProgressWidthWithStyle:(long long)a0;

- (void)startPlayWithDuration:(double)a0;
- (void)showProgressRingAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)reset;
- (id)shapeLayer;
- (id)recordingPath;
- (void)setupContent;

@end
