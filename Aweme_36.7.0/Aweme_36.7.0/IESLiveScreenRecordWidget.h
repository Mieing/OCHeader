@class UIButton, UIImageView, NSTimer, UILabel, CALayer, UIView;

@interface IESLiveScreenRecordWidget : IESLiveRecordWidget

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CALayer *kiraLayer;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIImageView *stopIcon;
@property (retain, nonatomic) NSTimer *splashTimer;
@property (nonatomic) double lastTapTime;
@property (nonatomic) BOOL isDefaultCleanMode;
@property (copy, nonatomic) id /* block */ clearAction;
@property (copy, nonatomic) id /* block */ expandAction;
@property (copy, nonatomic) id /* block */ stopAction;

- (void)updateTime:(double)a0;
- (void)setupWidget;
- (void)widgetDidTapped;
- (void)widgetShouldRestrain;
- (void)actionStopRecord:(id)a0;
- (void)renderWidgetIfIsExpanded:(BOOL)a0;
- (void)playKiraAnimation;
- (void)clearButtonClickAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setup;

@end
