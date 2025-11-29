@class UIImageView, NSTimer, UILabel, CALayer, UIView;

@interface IESLiveHighlightRecordWidget : IESLiveRecordWidget

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CALayer *splashLayer;
@property (retain, nonatomic) UIImageView *stopIcon;
@property (retain, nonatomic) NSTimer *splashTimer;
@property (nonatomic) double lastTapTime;
@property (copy, nonatomic) id /* block */ stopAction;

- (void)updateTime:(double)a0;
- (void)setupWidget;
- (void)widgetDidTapped;
- (void)widgetShouldRestrain;
- (void)playSplashAnimation;
- (void)actionStopRecord:(id)a0;
- (void)renderWidgetIfIsExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setup;

@end
