@class MMTimer, UIView, UILabel, UIButton;
@protocol MMLiveCountdownTipsViewDelegate;

@interface MMLiveCountdownTipsView : UIView

@property (retain, nonatomic) UIView *tipsViewContainer;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) MMTimer *coundownTimer;
@property (retain, nonatomic) UILabel *coundownTips;
@property (nonatomic) long long timerCountdown;
@property (nonatomic) long long countDown;
@property (nonatomic) BOOL isFinish;
@property (weak, nonatomic) id<MMLiveCountdownTipsViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 countTime:(long long)a1 delegate:(id)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)dealloc;
- (void)startCountdownTimer;
- (void)updateCountTimer;
- (void)clearCountdownTimer;
- (void)layoutCoundownTips;
- (void)layoutCancelButton;
- (void)onCancelLiveActionClicked;
- (void).cxx_destruct;

@end
