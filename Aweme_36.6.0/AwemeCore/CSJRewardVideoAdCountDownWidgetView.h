@class UIImageView, CSJGradientLabel, BUTimer, NSDate;

@interface CSJRewardVideoAdCountDownWidgetView : UIView

@property (retain, nonatomic) BUTimer *countDownTimer;
@property (nonatomic) long long countDown;
@property (nonatomic) long long keepTime;
@property (retain, nonatomic) UIImageView *redPacket;
@property (retain, nonatomic) CSJGradientLabel *countDownLabel;
@property (copy, nonatomic) id /* block */ countDownCompletion;
@property (readonly, nonatomic) long long currentCountDown;
@property (retain, nonatomic) NSDate *startingDate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 countDown:(long long)a1 keepTime:(long long)a2;
- (void)pbu_countDownAction;
- (void)scheduleCountDown;
- (BOOL)isValidCountDown;
- (BOOL)isScheduledCountDown;
- (void)pauseCountDown;
- (void)resumeCountDown;
- (void)invalidateCountDown;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupViews;

@end
