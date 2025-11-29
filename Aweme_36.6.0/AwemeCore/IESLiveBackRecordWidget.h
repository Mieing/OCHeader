@class CAShapeLayer, CADisplayLink, UILabel, UIView, IESLiveBacktrackProgressView;

@interface IESLiveBackRecordWidget : IESLiveRecordWidget

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *percentLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *drawLayer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isGuide;
@property (retain, nonatomic) IESLiveBacktrackProgressView *progressView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) BOOL shouldGuide;

- (void)updateTime:(double)a0;
- (void)setupWidget;
- (void)restrainWidget;
- (void)widgetDidTapped;
- (void)widgetShouldRestrain;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
