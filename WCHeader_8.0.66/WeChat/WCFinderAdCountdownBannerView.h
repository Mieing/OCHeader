@class MMTimer, UILabel, UIView, MMUIButton;
@protocol WCFinderAdCountdownBannerViewDelegate;

@interface WCFinderAdCountdownBannerView : UIView

@property (nonatomic) long long countdownNum;
@property (nonatomic) long long totalWatchCount;
@property (retain, nonatomic) MMTimer *countdownTimer;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) MMUIButton *adTipsButton;
@property (weak, nonatomic) id<WCFinderAdCountdownBannerViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 countdownNum:(long long)a1;
- (void)setupSubviews;
- (void)createCountdownTimerWithTimeInterval:(long long)a0;
- (void)layoutComponents;
- (void)countdownTimerCallBack;
- (void)updateUIWithTime:(long long)a0;
- (void)adBannerViewClickFeedbackAction:(id)a0;
- (void)startCountdown;
- (void)pauseCountdown;
- (BOOL)adHasPlayOver;
- (id)countdownLabelString;
- (void).cxx_destruct;

@end
