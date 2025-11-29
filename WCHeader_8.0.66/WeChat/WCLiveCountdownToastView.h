@class UIColor, MMTimer, UIImageView, NSString, UILabel, UIView;

@interface WCLiveCountdownToastView : UIView

@property (retain, nonatomic) UIView *toastViewContainer;
@property (retain, nonatomic) UIView *toastView;
@property (retain, nonatomic) MMTimer *coundownTimer;
@property (retain, nonatomic) UILabel *coundownTips;
@property (retain, nonatomic) UIImageView *completionImageView;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (retain, nonatomic) NSString *wordings;
@property (nonatomic) long long timerCountdown;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) NSString *timeoutIcon;
@property (retain, nonatomic) NSString *timeoutText;
@property (retain, nonatomic) UIColor *toastBackGroundColor;
@property (copy, nonatomic) id /* block */ timerTimeOutCallback;
@property (nonatomic) BOOL centerVertically;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 countTime:(long long)a1 wordings:(id)a2 timeoutIcon:(id)a3 timeoutText:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 countTime:(long long)a1 wordings:(id)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)startCountdownTimer;
- (void)updateCountTimer;
- (void)clearCountdownTimerAndRemoveView:(BOOL)a0;
- (void)showCompletion;
- (void)layoutToastView;
- (void)layoutCoundownTips;
- (void)layoutCompletionImageView;
- (void)layoutWordingLabel;
- (void)adjustContentViews;
- (void).cxx_destruct;

@end
