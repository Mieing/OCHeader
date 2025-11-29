@class UIImageView, NSTimer, UIColor;

@interface IESLiveIncentiveToolBarCountDownView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic) double currentDuration;
@property (nonatomic) double lastDisplayTime;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) double curProgress;
@property (nonatomic) double duration;
@property (nonatomic) double startProgress;
@property (nonatomic) double circleRadius;
@property (nonatomic) double circleBorderWidth;
@property (retain, nonatomic) UIColor *circleColor;
@property (retain, nonatomic) UIColor *progressColor;

- (void)showCountDownViewWithDuration:(double)a0 progress:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 curProgress:(double)a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
