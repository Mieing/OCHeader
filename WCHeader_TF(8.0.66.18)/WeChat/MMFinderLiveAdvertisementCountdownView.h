@class MMTimer, WCFinderProgressView, UIView, MMUILabel;

@interface MMFinderLiveAdvertisementCountdownView : UIView

@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMUILabel *trailerLabel;
@property (retain, nonatomic) WCFinderProgressView *progress;
@property (nonatomic) double countdownTime;
@property (nonatomic) long long countdownInteval;
@property (nonatomic) double timeInterval;
@property (nonatomic) long long totalTime;
@property (copy, nonatomic) id /* block */ countdownCompletion;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)refreshTimeLabel:(unsigned int)a0;
- (id)formatTime:(unsigned int)a0;
- (void)initTimer:(SEL)a0;
- (void)startAdvertisementCountdown;
- (void)startTrailerCountdown;
- (void)finishTrailerCountdown;
- (void)countDownTime;
- (void)countDownTrailerTime;
- (void)invalidateTimer;
- (void).cxx_destruct;

@end
