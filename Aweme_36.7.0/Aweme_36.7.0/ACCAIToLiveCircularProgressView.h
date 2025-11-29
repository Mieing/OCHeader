@class AWEAIGCProcessResultModel, NSTimer, CAShapeLayer, UIButton;

@interface ACCAIToLiveCircularProgressView : UIView

@property (nonatomic) double progressLineWidth;
@property (nonatomic) long long dotCount;
@property (nonatomic) double dotRadius;
@property (weak, nonatomic) UIButton *image2LiveButton;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) double totalCost;
@property (nonatomic) double currentCost;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *dotsLayer;
@property (nonatomic) double currentProgress;
@property (weak, nonatomic) AWEAIGCProcessResultModel *resultInfo;

- (void)setupLayers;
- (id)initWithImage2LiveItem:(id)a0;
- (void)doProgressPercent:(double)a0 withAnimation:(BOOL)a1 duration:(double)a2;
- (void)startProgressAndRunEndWithDuration:(double)a0;
- (void)doProgressPercent:(double)a0 duration:(double)a1;
- (void)drawDots;
- (void)updateProgressWithPrecent:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)setProgress:(double)a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
